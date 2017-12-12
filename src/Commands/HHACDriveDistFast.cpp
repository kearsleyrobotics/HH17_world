// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


#include "HHACDriveDistFast.h"

// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTOR

HHACDriveDistFast::HHACDriveDistFast(double hHACDriveDistFastDist): Command() {
    m_hHACDriveDistFastDist = hHACDriveDistFastDist;
        // Use requires() here to declare subsystem dependencies
    // eg. requires(Robot::chassis.get());
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
	Requires(Robot::hHBaseDrive.get());
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
}

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTOR

// Called just before this Command runs the first time
void HHACDriveDistFast::Initialize() {
	if (m_hHACDriveDistFastDist == 0.0)
	{
		m_hHACDriveDistFastDist = SmartDashboard::GetNumber("DS-Auto-Dist-From-Wall",74.0);
		frc::SmartDashboard::PutNumber("roboRIO-Dist-From-Wall2",m_hHACDriveDistFastDist);
	}
	Robot::hHBaseDrive->hHEBaseDrive->Reset();
	Robot::hHBaseDrive->hHGBaseDrive->Reset();
	hHAngle = 0;
	hHCorrection = 0;
	hHPower = 0;
	hHDist = 0;
	hHDistPast = false;
	SetTimeout(3.0);
}

// Called repeatedly when this Command is scheduled to run
void HHACDriveDistFast::Execute() {
	double hHAngle = (Robot::hHBaseDrive->hHGBaseDrive->GetAngle());

	if (hHAngle >= 5 || hHAngle <= -5)
	{
		hHCorrection = hHAngle * 0.06;
		hHPower = -0.30;
	}
	else
	{
		hHCorrection = hHAngle * 0.03;
		hHPower = -0.65;
	}
	double hHDist = (Robot::hHBaseDrive->hHEBaseDrive->GetDistance());
	frc::SmartDashboard::PutNumber("Gyro angle", hHAngle);
	//frc::SmartDashboard::PutNumber("Gyro angle calc", hHCorrection);

	if (hHDist<= m_hHACDriveDistFastDist)
	{
		Robot::hHBaseDrive->hHTankDrive(hHPower-hHCorrection,hHPower+hHCorrection);
	}
	else
	{
		hHDistPast = true;
		Robot::hHBaseDrive->hHTankDrive(0.0,0.0);
	}
}

// Make this return true when this Command no longer needs to run execute()
bool HHACDriveDistFast::IsFinished() {
	return (hHDistPast || IsTimedOut());
}

// Called once after isFinished returns true
void HHACDriveDistFast::End() {
	Robot::hHBaseDrive->hHTankDrive(0.0,0.0);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void HHACDriveDistFast::Interrupted() {
	End();
}