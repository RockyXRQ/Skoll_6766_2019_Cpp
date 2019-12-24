/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "commands/IntakeCommand/Release.h"

IntakeRelease::IntakeRelease() : frc::Command("IntakeRelease") {
    Requires(&Robot::m_intake);
}

void IntakeRelease::Initialize() {
}

void IntakeRelease::Execute() {
    Robot::m_intake.Spin(-1);
}

bool IntakeRelease::IsFinished() {
    return false;
}

void IntakeRelease::End() {
    Robot::m_intake.Spin(0);
}

void IntakeRelease::Interrupted() {
    End();
}
