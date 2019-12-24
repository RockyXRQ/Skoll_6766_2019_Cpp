/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "commands/CatcherCommand/Collect.h"

CatcherCollect::CatcherCollect() : frc::Command("CatcherCollect") {
    Requires(&Robot::m_catcher);
}

void CatcherCollect::Initialize() {
}

void CatcherCollect::Execute() {
    Robot::m_catcher.CatcherSetPositon(frc::DoubleSolenoid::Value::kForward);
}

bool CatcherCollect::IsFinished() {
    return false;
}

void CatcherCollect::End() {
}

void CatcherCollect::Interrupted() {
}
