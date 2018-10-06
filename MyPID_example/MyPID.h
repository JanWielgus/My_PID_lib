/*
  MyPID.h - PID library
  Created by Jan Wielgus, October 6, 2018.
*/

#ifndef _MYPID_h
#define _MYPID_h

#if defined(ARDUINO) && ARDUINO >= 100
	#include "arduino.h"
#else
	#include "WProgram.h"
#endif

struct ParamType
{
	float kP;
	float kI;
	float kD;
	uint16_t Imax;
};


class MyPID
{
	public:
		MyPID(ParamType par=0);
		
		ParamType getParameters();
		void setParameters(ParamType par);
		double updateController(double newError);
		static double getDeltaTime() { return deltaT; }
		static void updateDeltaTime();
		void resetController();
		
		
		
	private:
		ParamType parameters;
		static double deltaT; // [s]
		double lastError;
		double integral;
		
};


#endif

