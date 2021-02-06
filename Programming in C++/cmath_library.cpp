#pragma once

#include "cmath_library.h"
#define PI 3.14159265

void cmath_library_example() {
	double x = -1.2346;

	double degrees = 30;
	double radians = degrees * (PI / 180);

	std::cout << "Number before abs()   = " << x << " | Number after abs()   = " << abs(x)   << std::endl;
	std::cout << "Number before floor() = " << x << " | Number after floor() = " << floor(x) << std::endl;
	std::cout << "Number before ceil()  = " << x << " | Number after ceil()  = " << ceil(x)  << std::endl;

	std::cout << "Angle of " << degrees << " degrees has a sin()  of = " << sin(radians)  << std::endl;
	std::cout << "Angle of " << degrees << " degrees has a cos()  of = " << cos(radians)  << std::endl;
	std::cout << "Angle of " << degrees << " degrees has a tan()  of = " << tan(radians)  << std::endl;
	std::cout << "Angle of " << degrees << " degrees has a acos() of = " << acos(radians) << std::endl;
	std::cout << "Angle of " << degrees << " degrees has a asin() of = " << asin(radians) << std::endl;

	double y = 5.3, z = 6.3;

	std::cout << y << " to the power of " << z << " = " << pow(y, z) << std::endl;
	std::cout << "Square root of " << y << " = " << sqrt(y) << std::endl;
	std::cout << "The exponential value of " << y << " = " << exp(y) << std::endl;
}

