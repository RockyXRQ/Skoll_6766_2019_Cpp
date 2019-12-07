/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "subsystems/Intake.h"

Intake::Intake() : Subsystem("Intake") {
}

void Intake::Log() {
}

void Intake::InitDefaultCommand() {
}

void Intake::Spin(register double speed) {
    m_motorL.Set(speed);
    m_motorR.Set(-speed);
}

void Intake::Nodd(register double speed){
    m_motorMid.Set(speed);
}
