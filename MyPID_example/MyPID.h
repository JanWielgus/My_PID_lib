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


class MyPID
{
	public:
		MyPID(uint16_t, float, float, float, uint16_t); // interv, kp, ki, kd, imax
		double updateController(double); // newError
		double updateController(double, double); // setPoint, newValue
		void setParameters(float, float, float, uint16_t);
		void set_kP(float);
		void set_kI(float);
		void set_kD(float);
		void set_Imax(uint16_t);
		float get_kP();
		float get_kI();
		float get_kD();
		uint16_t get_Imax();
		void setInterval(uint16_t);
		uint16_t getInterval();
		void resetController();
		
		
		
	private:
		//static double deltaT; // [s]
		double lastError;
		double integral;
		uint16_t interval; // time will not be calculated, just have to be run every interval (in milliseconds)
		
		struct
		{
			float kP;
			float kI;
			float kD;
			uint16_t Imax;
		} params;
		
};


#endif

