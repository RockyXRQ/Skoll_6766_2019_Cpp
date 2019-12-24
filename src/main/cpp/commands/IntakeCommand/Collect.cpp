/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "commands/IntakeCommand/Collect.h"

IntakeCollect::IntakeCollect() : frc::Command("IntakeCollect") {
    Requires(&Robot::m_intake);
}

void IntakeCollect::Initialize() {
}

void IntakeCollect::Execute() {
    Robot::m_intake.Spin(1);
}

bool IntakeCollect::IsFinished() {
    return false;
}

void IntakeCollect::End() {
    Robot::m_intake.Spin(0);
}

void IntakeCollect::Interrupted() {
}
