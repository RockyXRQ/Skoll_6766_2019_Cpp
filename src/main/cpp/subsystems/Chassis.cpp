/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "subsystems/Chassis.h"

Chassis::Chassis() : Subsystem("Chassis") {
}

void Chassis::InitDefaultCommand() {
}

void Chassis::Log() {
}

void Chassis::Drive(register double leftSpeed, register double rightSpeed) {
    m_robotDrive.TankDrive(leftSpeed, rightSpeed);
}
