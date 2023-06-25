#pragma once
#include "equation.h"

class linear : public equation {
	double a;
	double b;
public:
	linear(double _a, double _b) :
		a{ _a }, b{ _b } 
	{

	}
	
	double getroot() {
		double x;
		x = (b == 0) ? 0 : b / a;
		return x;
	}
};