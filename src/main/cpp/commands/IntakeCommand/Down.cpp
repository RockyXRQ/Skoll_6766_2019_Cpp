/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "commands/IntakeCommand/Down.h"

IntakeDown::IntakeDown() : frc::Command("IntakeDown") {
    Requires(&Robot::intake);
    SetTimeout(0.5);
}

void IntakeDown::Initialize() {
}

void IntakeDown::Execute() {
    Robot::intake.Nodd(-0.5);
}

bool IntakeDown::IsFinished() {
    return IsTimedOut();
}

void IntakeDown::End() {
    Robot::intake.Nodd(0);
}

void IntakeDown::Interrupted() {
    End();
}
