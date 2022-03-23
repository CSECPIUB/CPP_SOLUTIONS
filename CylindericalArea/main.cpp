// main.cpp
// Program to calculate cylindrical Area and Surface Area in C++
// Author Crimson Codes (@ICrimsonCodes)

#include <iostream>

int main()
{
	double r{}, h{};
	const double PI = 3.14159;

	std::cout << "Input Radius r  >> ";
	std::cin >> r;
	std::cout << "Input Height h >> ";
	std::cin >> h;
	
	double Area = PI * r * r * h;
	double Surface  = 2 * PI * r * h + 2 * PI * r * r;
	
	std::cout << "Area of Cylinder = " << Area << "\n";
	std::cout << "Surface Area = " << Surface << "\n";
	
	return 0;
}