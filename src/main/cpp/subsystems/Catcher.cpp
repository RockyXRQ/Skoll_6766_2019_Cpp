/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "subsystems/Catcher.h"

Catcher::Catcher() : Subsystem("Catcher") {
}

void Catcher::Log() {
    frc::SmartDashboard::PutNumber("Catcher", m_catcher.Get());
}

void Catcher::InitDefaultCommand() {
}

void Catcher::CatcherSetPositon(register frc::DoubleSolenoid::Value position) {
    m_catcher.Set(position);
}

void Catcher::CompressorSetPostion(register bool IsOpen) {
    if (IsOpen) {
        m_comprerror.Start();
    } else {
        m_comprerror.Stop();
    }
}
