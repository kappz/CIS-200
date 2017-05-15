/*
Author: Peter O'Donohue
Creation Date: 05/15/17
Modification Date: 05/15/17
Purpose: Practice with Autograder Submissions
*/

// sumFun.cpp
// this program computes and prints the sum of two user supplied integer inputs

#include <iostream>

using namespace std;

/*
Author: Peter O'Donohue
Creation Date: 05/15/17
Modification Date: 05/15/17
Purpose: main function
*/
int main()
{
	int a = 0;  // stores first integer
	int b = 0;  // stores second integer
	int c = 0;  // stores sum

	// prompt user to enter two integers
	cout << "Enter two integers, seperating each with a space: ";
	cin >> a >> b;
	c = a + b;  // calculate sum

	// print result
	cout << "The sum of " << a << " and " << b << " is " << c << '\r';

	return 1;
}