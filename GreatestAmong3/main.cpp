// main.cpp
// Find Greatest Number betweeen 3 Numbers in C++
// Author Crimson Codes (@ICrimsonCodes)

#include <iostream>

int main()
{
	int a{}, b{}, c{};

	std::cout << "Input 1st Number  >> ";
	std::cin >> a;
	std::cout << "\nInput 2nd Number >> ";
	std::cin >> b;
	std::cout << "\nInput 3rd Number >> ";
	std::cin >> c;
	
	if (a > b && a > c)
		std::cout << "\nGreatest Number is >>  " << a;
	
	if (b > a && b > c)
		std::cout << "\nGreatest Number is >>  " << b;
	
	if (c > a && c > b)
		std::cout << "\nGreatest Number is >>  " << c;
	
	return 0;
}