#ifndef __OMNETPP_QTENV_NETWORKPARAMETERSINPUTDIALOG_H
#define __OMNETPP_QTENV_NETWORKPARAMETERSINPUTDIALOG_H

#include <QDialog>
#include <QLabel>
#include <QLineEdit>
#include <QSpinBox>
#include <QDoubleSpinBox>
#include <QDialogButtonBox>
#include <QFormLayout>
#include <QVBoxLayout>
#include <omnetpp/cconfiguration.h>
#include <omnetpp/ccomponent.h>

#include "qtenvdefs.h"

namespace Ui {
class NetWorkParametersInputDialog;
}

namespace omnetpp {
namespace qtenv {

class Qtenv;

class InputBase{
  public:
    explicit InputBase(const char* param){
      this->param = param;
    }

    virtual std::string GetStrValue() const=0;
    const char* GetParamName(){
      return param;
    }
  protected:
    const char* param;
};

class StringInput:public QLineEdit,public InputBase{
    Q_OBJECT
  public:
    // explicit InputControl(QWidget *parent = nullptr);
    explicit StringInput(const char* labelText, QWidget *parent = nullptr):InputBase(labelText), QLineEdit(parent){
    }

  virtual std::string GetStrValue() const override{
    return this->text().toStdString();
  }

};

class IntInput:public QSpinBox,public InputBase{
    Q_OBJECT
  public:
    // explicit InputControl(QWidget *parent = nullptr);
    explicit IntInput(const char* labelText, QWidget *parent = nullptr):InputBase(labelText), QSpinBox(parent){
    }

  virtual std::string GetStrValue() const override{
    return std::to_string(this->value());
  }
};

class DoubleInput:public QDoubleSpinBox, public InputBase{
    Q_OBJECT
  public:
    // explicit InputControl(QWidget *parent = nullptr);
    explicit DoubleInput(const char* labelText, QWidget *parent = nullptr):InputBase(labelText), QDoubleSpinBox(parent){
    }

  virtual std::string GetStrValue() const override{
    return std::to_string(this->value());
  }

};


class QTENV_API NetWorkParametersInputDialog : public QDialog
{
    Q_OBJECT

  public:
    explicit NetWorkParametersInputDialog(cComponent *component, std::map<std::string, std::pair<std::string, std::string>> & parameterslist, QWidget *parent = nullptr);
  private:
    QDialogButtonBox *buttonBox;
    QFormLayout* mainPan; 
    QLabel* prompt;
    QVBoxLayout *vLayout;
    std::map<std::string, InputBase*> parameterValues;
    cComponent *cpt;
  protected:
      void accept() override;
};

} // namespace qtenv
} // namespace omnetpp

#endif
