#include <iostream>
#include "calculator.h"

int main() {
	Calculator calc;


	int x = 5, y = 3;
	std::cout << "Sum: " << calc.Add(x, y) << std::endl;
	std::cout << "Difference: " << calc.Sub(x, y) << std::endl;
	return 0;
}

