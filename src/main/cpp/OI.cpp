/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "OI.h"

#include "commands/IntakeCommand/Release.h"
#include "commands/IntakeCommand/Up.h"
#include "commands/IntakeCommand/Down.h"
#include "commands/IntakeCommand/Collect.h"

#include "commands/ElevatorCommand/Up.h"
#include "commands/ElevatorCommand/Down.h"
#include "commands/ElevatorCommand/SetPoint.h"

#include "commands/CatcherCommand/Collect.h"
#include "commands/CatcherCommand/Release.h"
#include "commands/CatcherCommand/ComprosserSetPosition.h"

OI::OI() {
    m_eleUp.WhenPressed(new ElevatorUp());
    m_eleDown.WhenPressed(new ElevatorDown());
    m_eleSetPointUp.WhenPressed(new ElevatorSetPoint(GetLevel(1)));
    m_eleSetPointDown.WhenPressed(new ElevatorSetPoint(GetLevel(-1)));

    m_intakeOpen.WhenPressed(new IntakeCollect());
    m_intakeClose.WhenPressed(new IntakeRelease());
    m_intakeUp.WhenPressed(new IntakeUp());
    m_intakeDown.WhenPressed(new IntakeDown());

    m_catherOpen.WhenPressed(new CatcherCollect());
    m_catherClose.WhenPressed(new CatcherRelease());

    m_comprosserOpen.WhenPressed(new ComprosserSetPosition());
}

frc::Joystick& OI::GetJoystickA() {
    return m_joystickA;
}

frc::Joystick& OI::GetJoystickB() {
    return m_joystickB;
}

inline int OI::GetLevel(int move) {
    static int level = 0;
    level += move;
    if (level > 2)
        level = 2;
    else if (level < 0)
        level = 0;
    return level;
}