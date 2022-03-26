// main.cpp
// Program to print digits of an Integer in C++
// Author Crimson Codes (@ICrimsonCodes)


#include <iostream>
using namespace std;

int main()
{
	int n{};
	cout << "Enter a 5 digit Number >>  ";
	cin >> n;
	
	cout << n / 10000 % 10 << '\t';
	cout << n / 1000 % 10 << '\t';
	cout << n / 100 % 10 << '\t';
	cout << n / 10 % 10 << '\t';
	cout << n % 10 << '\t';
	return 0;
}