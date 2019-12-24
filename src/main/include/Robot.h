/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#pragma once

#include <frc/TimedRobot.h>
#include <frc/WPILib.h>
#include <frc/commands/Command.h>
#include <frc/smartdashboard/SendableChooser.h>

#include "subsystems/Catcher.h"
#include "subsystems/Chassis.h"
#include "subsystems/Elevator.h"
#include "subsystems/Intake.h"

#include "OI.h"

class Robot : public frc::TimedRobot {
   public:
    static Catcher m_catcher;
    static Chassis m_chassis;
    static Elevator m_elevator;
    static Intake m_intake;
    static OI m_oi;

   private:
    void RobotInit() override;
    void AutonomousInit() override;
    void AutonomousPeriodic() override;
    void TeleopInit() override;
    void TeleopPeriodic() override;
};
