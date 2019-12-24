/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "commands/CatcherCommand/Release.h"

CatcherRelease::CatcherRelease() : frc::Command("CatcherRelease") {
    Requires(&Robot::m_catcher);
}

void CatcherRelease::Initialize() {
}

void CatcherRelease::Execute() {
    Robot::m_catcher.CatcherSetPositon(frc::DoubleSolenoid::Value::kReverse);
}

bool CatcherRelease::IsFinished() {
    return false;
}

void CatcherRelease::End() {
}

void CatcherRelease::Interrupted() {
}
