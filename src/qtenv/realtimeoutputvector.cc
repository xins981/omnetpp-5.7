#include "realtimeoutputvector.h"
#include "omnetpp/clifecyclelistener.h"
#include "omnetpp/cobject.h"
#include <thread>
#include <signal.h>

namespace omnetpp {
namespace qtenv {

using namespace std;

RealtimeOutputVector::RealtimeOutputVector()
{
	isExported = false;
}

RealtimeOutputVector::~RealtimeOutputVector()
{
	exportThread.join();
}

void RealtimeOutputVector::ExportCSV()
{
	while(!isExported)
	{
		try
		{
			system("scavetool x ./results/*.vec -o ./results/traffic.csv");
			this_thread::sleep_for(0.4s);
		}
		catch(exception& e){}
	}
}


void RealtimeOutputVector::lifecycleEvent(SimulationLifecycleEventType eventType, cObject *details)
{
	if(eventType == LF_POST_NETWORK_INITIALIZE)
	{
		system("rm -r results");
		exportThread = thread(&RealtimeOutputVector::ExportCSV, this);
		chPid = fork();
		if(chPid == 0)
		{
			execlp("python3.8", "ddosdetect", "DDosDetection.py", nullptr);
		}
	}
}

}  // namespace qtenv
}  // namespace omnetpp

