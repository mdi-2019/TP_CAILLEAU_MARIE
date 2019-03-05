// MDI_CAILLEAU_MARIE.cpp : Defines the entry point for the application.
//

#include "MDI_CAILLEAU_MARIE.h"
#include "../dependencies/termcolor/include/termcolor/termcolor.hpp"
#include "calculator.hpp"
using namespace std;

int get_mode()
{
	std::cout << "Please choose the mod (0:add | 1:sub | 2:mul | 3:div)" << std::endl;
	int mode;
	std::cin >> mode;
	return mode;
}

float calculate()
{
	int mode = get_mode();
	float res;
	if(mode == 0)
	{
		float a,b;
		std::cin >> a;
		std::cin >> b;
		res = a + b;
		std::cout << a << " + " << b << " = " << res << std::endl;
		return res;
	}
	else if(mode == 1)
	{
		float a,b;
		std::cin >> a;
		std::cin >> b;
		res = a - b;
		std::cout << a << " - " << b << " = " << res << std::endl;
		return res;
	}
	else if(mode == 2)
	{
		float a,b;
		std::cin >> a;
		std::cin >> b;
		res = a * b;
		std::cout << a << " * " << b << " = " << res << std::endl;
		return res;
	}
	else if(mode == 3)
	{
		float a,b;
		std::cin >> a;
		std::cin >> b;
		res = a / b;
		std::cout << a << " / " << b << " = " << res << std::endl;
		return res;
	}
	else
	{
		std::cout << "Unvalid mode" << std::endl;
	}
	
}

int main()
{
	float previous = 0;
	while(true)
	{
		previous = calculate();
	}
}