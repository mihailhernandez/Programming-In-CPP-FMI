#pragma once

#include <iostream>
#include <limits.h>
#include "under_and_over_flow.h"

void under_and_over_flow_examples() {
	
	// Underflow
	int variable = INT_MIN;
	std::cout << "Min int     = " << variable << std::endl;
	variable--;
	std::cout << "Min int - 1 = " << variable << std::endl;
	
	// Overflow
	variable = INT_MAX;
	std::cout << "Max int     = " << variable << std::endl;
	variable++;
	std::cout << "Max int + 1 = " << variable << std::endl;
}