/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "OI.h"

#include <frc/WPILib.h>

#define MIAO(val, min, max) \
    ((val) = ((val) > (min) ? (val) : ((val) = (min))) < (max) ? (val) : (max))

static int level = 0;

OI::OI() {
    m_eleUp.WhenPressed(new ElevatorUp{});
    m_eleDown.WhenPressed(new ElevatorDown{});
    m_eleSetPointUp.WhenPressed(new ElevatorSetPoint{MIAO(++level, 0, 2)});
    m_eleSetPointDown.WhenPressed(new ElevatorSetPoint{MIAO(--level, 0, 2)});

    m_intakeOpen.WhenPressed(new IntakeCollect{});
    m_intakeClose.WhenPressed(new IntakeRelease{});
    m_intakeUp.WhenPressed(new IntakeUp{});
    m_intakeDown.WhenPressed(new IntakeDown{});

    m_catherOpen.WhenPressed(new CatcherCollect{});
    m_catherClose.WhenPressed(new CatcherRelease{});

    m_comprosserOpen.WhenPressed(new ComprosserSetPosition{});
}

frc::Joystick& OI::GetJoystickA() {
    return m_joystickA;
}

frc::Joystick& OI::GetJoystickB() {
    return m_joystickB;
}
