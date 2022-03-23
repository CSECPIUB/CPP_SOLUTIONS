# FizzBuzz
 program written by @ICrimsonCodes

```cpp 
// main.cpp
// FizzBuzz in C++
// Author Crimson Codes (@ICrimsonCodes)

#include <iostream>

using namespace std;
int main()
{
	for (int i = 1; i <= 100; i++) {
		if (i % 3 == 0 && i % 5 == 0)
			cout << "FizzBuzz" << '\n';

		else if (i % 3 == 0)
			cout << "Fizz" << '\n';

		else if (i % 5 == 0)
			cout << "Buzz\n";
		else
			cout << i << '\n';
	}
	return 0;
}
```