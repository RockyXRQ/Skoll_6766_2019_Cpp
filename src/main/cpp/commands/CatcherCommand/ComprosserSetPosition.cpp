/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "commands/CatcherCommand/ComprosserSetPosition.h"

ComprosserSetPosition::ComprosserSetPosition()
    : frc::Command("ComprosserSetPosition") {
    Requires(&Robot::m_catcher);
}

void ComprosserSetPosition::Initialize() {
}

void ComprosserSetPosition::Execute() {
    Robot::m_catcher.CompressorSetPostion(true);
}

bool ComprosserSetPosition::IsFinished() {
    return false;
}

void ComprosserSetPosition::End() {
    Robot::m_catcher.CompressorSetPostion(false);
}

void ComprosserSetPosition::Interrupted() {
    End();
}
