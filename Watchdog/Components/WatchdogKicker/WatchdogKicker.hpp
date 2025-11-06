// ======================================================================
// \title  WatchdogKicker.hpp
// \author griffin
// \brief  hpp file for WatchdogKicker component implementation class
// ======================================================================

#ifndef Components_WatchdogKicker_HPP
#define Components_WatchdogKicker_HPP

#include "Watchdog/Components/WatchdogKicker/WatchdogKickerComponentAc.hpp"

namespace Components {

class WatchdogKicker final : public WatchdogKickerComponentBase {
  public:
    // ----------------------------------------------------------------------
    // Component construction and destruction
    // ----------------------------------------------------------------------

    //! Construct WatchdogKicker object
    WatchdogKicker(const char* const compName  //!< The component name
    );

    //! Destroy WatchdogKicker object
    ~WatchdogKicker();

  private:
    // ----------------------------------------------------------------------
    // Handler implementations for commands
    // ----------------------------------------------------------------------

    //! Handler implementation for command TODO
    //!
    //! TODO
    void TODO_cmdHandler(FwOpcodeType opCode,  //!< The opcode
                         U32 cmdSeq            //!< The command sequence number
                         ) override;
};

}  // namespace Components

#endif
