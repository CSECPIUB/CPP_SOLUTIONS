// main.cpp
// Print if 2nd number id factor of 1st in C++
// Author Crimson Codes (@ICrimsonCodes)

#include <iostream>
using namespace std;

int main() {
	int a{}, b{};

	cout << "Input 2 Numbers >> ";
	cin >> a >> b;

	if (a % b == 0)

		cout << b << " is factor of" << a << '\n';
	else
		cout << b << " is not factor of " << a << '\n';

	return 0;
}