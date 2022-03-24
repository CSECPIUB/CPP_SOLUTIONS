// main.cpp
// Program to Print Integer Equivalent of a Cheracter in C++
// Author Crimson Codes (@ICrimsonCodes)


#include <iostream>
using namespace std;

int main()
{
	char s;
	cout << "Enter a cheracter >> ";
	cin >> s;
	cout << s << "'s equivalent integer is >> "
		<< static_cast<int>(s) << endl;
	return 0;
}