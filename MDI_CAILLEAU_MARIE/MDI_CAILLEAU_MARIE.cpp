// MDI_CAILLEAU_MARIE.cpp : Defines the entry point for the application.
//

#include "MDI_CAILLEAU_MARIE.h"
#include "../dependencies/termcolor/include/termcolor/termcolor.hpp"
#include "calculator.hpp"
using namespace std;

int main()
{
	Calculator calc;
	calc.__init();


	while (1) 
	{
		std::string line;
		std::cin >> line;
		std::cout << calc.compute(line) << std::endl;
	}
	return 0;
}
