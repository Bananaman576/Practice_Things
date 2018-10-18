/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include <TimedRobot.h>
#include <Joystick.h>
#include <ctre/Phoenix.h>

/**
 * This sample program shows how to control a motor using a joystick. In the
 * operator control part of the program, the joystick is read and the value is
 * written to the motor.
 *
 * Joystick analog values range from -1 to 1 and speed controller inputs as
 * range from -1 to 1 making it easy to work together.
 */
class Robot : public frc::TimedRobot {
 public:
  void TeleopPeriodic() override {
     m_motor->Set(m_driveMode,1); 
     }

 private:
 ControlMode m_driveMode = ControlMode::PercentOutput;
  frc::Joystick* m_stick = new frc::Joystick(0);
  TalonSRX* m_motor = new TalonSRX(2);
};

START_ROBOT_CLASS(Robot)
