// ======================================================================
// \title  WatchdogKicker.cpp
// \author griffin
// \brief  cpp file for WatchdogKicker component implementation class
// ======================================================================

#include "Watchdog/Components/WatchdogKicker/WatchdogKicker.hpp"

namespace Components {

// ----------------------------------------------------------------------
// Component construction and destruction
// ----------------------------------------------------------------------

WatchdogKicker ::WatchdogKicker(const char* const compName) : WatchdogKickerComponentBase(compName) {}

WatchdogKicker ::~WatchdogKicker() {}

// ----------------------------------------------------------------------
// Handler implementations for commands
// ----------------------------------------------------------------------

void WatchdogKicker ::TODO_cmdHandler(FwOpcodeType opCode, U32 cmdSeq) {
    // TODO
    this->cmdResponse_out(opCode, cmdSeq, Fw::CmdResponse::OK);
}

}  // namespace Components
