#pragma once
#include <iostream>
#include "type_conversion_examples.h"

void type_conversion_example() {
	int x = 33434567, y = 1255432;;

	std::cout << "x = " << x << " | signed short(x)   = " << (short) x          << std::endl;
	std::cout << "x = " << x << " | unsinged short(x) = " << (unsigned short) x << std::endl;
	std::cout << "x = " << x << " | long (x)          = " << (long) x           << std::endl;
	std::cout << "x = " << x << " | float (x)         = " << (float) x          << std::endl;
	std::cout << "x = " << x << " | double (x)        = " << (double) x         << std::endl;
	std::cout << "x = " << x << " | long double (x)   = " << (long double) x    << std::endl;

	std::cout << "x = " << x << " | y = " << y << " | (x / y)         = " <<         (x / y) << std::endl;
	std::cout << "x = " << x << " | y = " << y << " | (double)(x / y) = " << (double)(x / y) << std::endl;
	std::cout << "x = " << x << " | y = " << y << " | ((double)x / y) = " << ((double)x / y) << std::endl;
	std::cout << "x = " << x << " | y = " << y << " | (x / (double)y) = " << (x / (double)y) << std::endl;
}