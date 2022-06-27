#include "networkparametersinputdialog.h"
namespace omnetpp {

namespace qtenv {

NetWorkParametersInputDialog::NetWorkParametersInputDialog(cComponent *component, std::map<std::string, std::pair<std::string, std::string>> & parameterslist, QWidget *parent):QDialog{parent}{
    // 设置标题
    setWindowTitle("自定义配置");
    // 初始化固定布局
    vLayout = new QVBoxLayout(this);
    buttonBox = new QDialogButtonBox(this);
    buttonBox->setStandardButtons(QDialogButtonBox::Cancel | QDialogButtonBox::Ok);
    prompt = new QLabel("请指定以下网络参数",this);
    vLayout->addWidget(prompt);
    vLayout->addWidget(buttonBox);
    mainPan = new QFormLayout();
    cpt = component;
    // 循环新建
    for (auto &parameter : parameterslist) {
        // 获取类型
        const char *paramName = parameter.first.c_str();
        cPar& p = component->par(paramName);
        QWidget* control = nullptr;
        switch (p.getType())
        {
        case cPar::Type::INT:
            control = new IntInput(paramName, this);
            if(!parameter.second.first.empty())
                dynamic_cast<QSpinBox*>(control)->setValue(std::stoi(parameter.second.first));
            break;
        case cPar::Type::DOUBLE:
            control = new DoubleInput(paramName, this);
            if(!parameter.second.first.empty())
                dynamic_cast<QDoubleSpinBox*>(control)->setValue(std::stod(parameter.second.first));
            break;
        default:
            control = new StringInput(paramName, this);
            dynamic_cast<QLineEdit*>(control)->setText(parameter.second.first.c_str());
            break;
        }
        mainPan->addRow(parameter.second.second.c_str(), control);
        parameterValues[std::string(paramName)] = dynamic_cast<InputBase*>(control);
    } 
    vLayout->insertLayout(1, mainPan);
    adjustSize();


    // 指定按钮事件
    connect(buttonBox, &QDialogButtonBox::accepted, this, &NetWorkParametersInputDialog::accept);
    connect(buttonBox, &QDialogButtonBox::rejected, this, &NetWorkParametersInputDialog::reject);
}



#include <exception>
void NetWorkParametersInputDialog::accept(){
    // 遍历并把获取到的值赋给cPar
    try {
        for(auto &pa: parameterValues) {
            cPar& p = cpt->par(pa.first.c_str());
            p.parse(pa.second->GetStrValue().c_str());
        }
    }
    catch(std::exception& e){
        std::cout << "ERROR:" <<e.what() << std::endl;
    }
    QDialog::accept();
}

}
}