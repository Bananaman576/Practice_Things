#include <wpilib.h>
#include <ctre/Phoenix.h>

class Autonomous {
    int m_state;
    Timer m_timer;
    TalonSRX m_motor;
    ControlMode m_driveMode;
    

    public:
            void AutonomousPeriodic();
            void AutonomousInit();
            Autonomous(TalonSRX m_motor);
};