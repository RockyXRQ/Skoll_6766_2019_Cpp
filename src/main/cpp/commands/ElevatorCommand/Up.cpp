/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "commands/ElevatorCommand/Up.h"

ElevatorUp::ElevatorUp() : frc::Command("ElevatorUp") {
    Requires(&Robot::elevator);
}

void ElevatorUp::Initialize() {
    Robot::elevator.Disable();
}

void ElevatorUp::Execute() {
    Robot::elevator.UsePIDOutput(1);
}

bool ElevatorUp::IsFinished() {
    return false;
}

void ElevatorUp::End() {
    Robot::elevator.UsePIDOutput(0);
}

void ElevatorUp::Interrupted() {
    End();
}
