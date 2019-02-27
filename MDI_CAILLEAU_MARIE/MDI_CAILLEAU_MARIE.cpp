// MDI_CAILLEAU_MARIE.cpp : Defines the entry point for the application.
//

#include "MDI_CAILLEAU_MARIE.h"
#include "../dependencies/termcolor/include/termcolor/termcolor.hpp"

using namespace std;

int main()
{
	int a, b;
	std::cin >> a;
	std::cout << "+";
	std::cin >> b;
	std::cout << "=" << a + b;
	while (1) {}
	return 0;
}
