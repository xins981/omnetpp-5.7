#ifndef __QTENV_REALTIMEOUTPUTVECTOR_H
#define __QTENV_REALTIMEOUTPUTVECTOR_H

#include "omnetpp/clifecyclelistener.h"
#include "omnetpp/cobject.h"
#include <thread>

namespace omnetpp {
namespace qtenv {


class RealtimeOutputVector : public cISimulationLifecycleListener
{
private:
	std::thread exportThread;
	void ExportCSV();
public:
	RealtimeOutputVector();
	~RealtimeOutputVector();
	pid_t chPid;
	bool isExported;
	void lifecycleEvent(SimulationLifecycleEventType eventType, cObject *details) override;
};

} // namespace qtenv
} // namespace omnetpp


#endif


