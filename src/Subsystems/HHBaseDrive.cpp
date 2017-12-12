
// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.




#include "HHBaseDrive.h"
#include "../RobotMap.h"
// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES
#include "../Commands/HHRobotControl.h"
// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES
#include "CANTalon.h"

// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTANTS

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTANTS

HHBaseDrive::HHBaseDrive() : Subsystem("HHBaseDrive") {
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
    hHSCLeftFront = RobotMap::hHBaseDriveHHSCLeftFront;
    hHSCLeftRear = RobotMap::hHBaseDriveHHSCLeftRear;
    hHSCRightFront = RobotMap::hHBaseDriveHHSCRightFront;
    hHSCRightRear = RobotMap::hHBaseDriveHHSCRightRear;
    hHRobotDrive41 = RobotMap::hHBaseDriveHHRobotDrive41;
    hHEBaseDrive = RobotMap::hHBaseDriveHHEBaseDrive;
    hHGBaseDrive = RobotMap::hHBaseDriveHHGBaseDrive;

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
}

void HHBaseDrive::InitDefaultCommand() {
    // Set the default command for a subsystem here.
    // SetDefaultCommand(new MySpecialCommand());
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DEFAULT_COMMAND

        SetDefaultCommand(new HHRobotControl());

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DEFAULT_COMMAND
}

void HHBaseDrive::hHTankDrive(double leftYIn, double rightYIn){
	hHRobotDrive41->TankDrive( leftYIn, rightYIn);
	frc::SmartDashboard::PutNumber("Encoder Distance",Robot::hHBaseDrive->hHEBaseDrive->GetDistance());
	//frc::SmartDashboard::PutNumber("Encoder Rate",Robot::hHBaseDrive->hHEBaseDrive->GetRate());
}

//void HHBaseDrive::hHTankDrive(Joystick* hHControler0, Joystick* hHControler1)
//{
	//hHRobotDrive41( stick0,stick1);
	//hHRobotDrive41( hHControler0->GetY(),hHControler1->GetY());
	//Drive(TankDrivejoystick1->GetY(),TankDrivejoystick0->GetY());
//}
//void HHBaseDrive::hHTankDrive(Joystick* hHControler0, Joystick* hHControler1)
//{
//	hHRobotDrive41->TankDrive( hHControler0->GetY(),hHControler1->GetY());
	//hHRobotDrive41( hHControler0->GetY(),hHControler1->GetY());
	//Drive(TankDrivejoystick1->GetY(),TankDrivejoystick0->GetY());
//}
//}
// Put methods for controlling this subsystem
// here. Call these from Commands.

