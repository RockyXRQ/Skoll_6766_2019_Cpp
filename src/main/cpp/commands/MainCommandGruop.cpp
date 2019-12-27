/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "commands/MainCommandGruop.h"
#include "commands/ChassisCommand/DriveByJoystick.h"
MainCommandGruop::MainCommandGruop() {
    AddParallel(new DriveByJoystick());
}
