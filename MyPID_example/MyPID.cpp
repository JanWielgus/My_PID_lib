/*
  MyPID.cpp - PID library
  Created by Jan Wielgus, October 6, 2018.
*/

#include "MyPID.h"

MyPID::MyPID(uint16_t interval, float kP=0.0, float kI=0.0, float kD=0.0, uint16_t Imax=0)
{
	this->params.kP = kP;
	this->params.kI = kI;
	this->params.kD = kD;
	this->params.Imax = Imax;
	this->interval = interval;
}


double MyPID::updateController(double setPoint, double newValue)
{
	return updateController(setPoint-newValue);
}


double MyPID::updateController(double newError);
{
	//////////////////////////////////////////////////////////////////////////
	// Not yet implemented
	//////////////////////////////////////////////////////////////////////////
}


void MyPID::setParameters(float kP, float kI, float kD, uint16_t Imax)
{
	set_kP(kP);
	set_kI(kI);
	set_kD(kD);
	set_Imax(Imax);
}

void MyPID::set_kP(float kP)
{
	this->params.kP = kP;
}

void MyPID::set_kI(float kI)
{
	this->params.kI = kI;
}

void MyPID::set_kD(float kD)
{
	this->params.kD = kD;
}

void MyPID:: set_Imax(uint16_t imax)
{
	this->params.Imax = imax;
}

float MyPID::get_kP()
{
	return params.kP;
}

float MyPID::get_kI()
{
	return params.kI;
}

float MyPID::get_kD()
{
	return params.kD;
}

uint16_t MyPID::get_Imax()
{
	return params.Imax;
}


void MyPID::setInterval(uint16_t interval)
{
	this->interval = interval;
}

uint16_t MyPID::getInterval()
{
	return interval;
}


void MyPID::resetController()
{
	//////////////////////////////////////////////////////////////////////////
	// Not yet implemented
	//////////////////////////////////////////////////////////////////////////
}





