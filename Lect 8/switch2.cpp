// Following is a simple program to demonstrate
// syntax of Nested Switch Statements.
#include <iostream>
using namespace std;

int main()
{
	int x = 1, y = 2;

	// Outer Switch
	switch (x) {

	// If x == 1
	case 1:

		// Nested Switch

		switch (y) {

		// If y == 2
		case 2:
			cout << "Choice is 2";
			break;

		// If y == 3
		case 3:
			cout << "Choice is 3";
			break;
		}
		break;

	// If x == 4
	case 4:
		cout << "Choice is 4";
		break;

	// If x == 5
	case 5:
		cout << "Choice is 5";
		break;

	default:
		cout << "Choice is other than 1, 2 3, 4, or 5";
		
	}
	return 0;
}

// This code is contributed by Shubham Singh

