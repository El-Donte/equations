#pragma once
#include "equation.h"
#include <math.h>
#include <string>
#include <iostream>
#include <stdexcept>

class quadratic : public equation {
	double a;
	double b;
	double c;
public: 
	quadratic(double _a, double _b, double _c) :
		a{ _a }, b{ _b }, c{ _c } 
	{

	}

	double getroot() {
		double x1;
		double x2;
		double d;
		try {
			if (a == 0) {
				x1 = -c / b;
				return x1;
			}
			d = b * b - 4 * a * c;
			if (d < 0) {
				throw std::invalid_argument("discriminat less than zero");
			}
			else if (d == 0) {
				x1 = -b / (2 * a);
				return x1;
			}
			else {
				x1 = (-b + sqrt(d)) / (2 * a);
				x2 = (-b - sqrt(d)) / (2 * a);
				return x1, x2;
			}
			
		}
		catch(std::invalid_argument& a){
			std::cout << a.what();
		}	
	}
};