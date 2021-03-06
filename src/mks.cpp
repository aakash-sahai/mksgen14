#include "mkscommon.h"
#include "CLI.h"
#include "StepperMotor.h"
#include "PushButton.h"
#include "Pin.h"

namespace mksgen {

MKS::MKS() {
}

MKS::~MKS() {
}

void MKS::init(void) {
  CLI::addModule("pin", Pin::create);
  CLI::addModule("stepper", StepperMotor::create);
  CLI::addModule("pushbutton", PushButton::create);
}

}
