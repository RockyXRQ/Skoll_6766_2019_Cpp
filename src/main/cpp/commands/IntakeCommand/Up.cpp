/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "commands/IntakeCommand/Up.h"

IntakeUp::IntakeUp() : frc::Command("IntakeUp") {
    Requires(&Robot::intake);
    SetTimeout(0.5);
}

void IntakeUp::Initialize() {
}

void IntakeUp::Execute() {
    Robot::intake.Nodd(1);
}

bool IntakeUp::IsFinished() {
    return IsTimedOut();
}

void IntakeUp::End() {
    Robot::intake.Nodd(0);
}

void IntakeUp::Interrupted() {
    End();
}
