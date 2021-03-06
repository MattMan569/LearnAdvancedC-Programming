// LambdaCaptureExpressions.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <string>

using namespace std;





int main()
{
	int one = 1;
	int two = 2;
	int three = 3;

	// Capture specific variables by value
	[one]() { cout << one << endl; } ();
	[one, two]() { cout << one << ", " << two << endl; } ();

	cout << endl;

	// Capture all local variables by value
	[=]() { cout << one << ", " << two << endl; } ();

	cout << endl;

	// Capture all local variables by value by default,
	// but capture three by reference
	[=, &three]() { cout << one << ", " << two << ", " << three++ << endl; } ();
	cout << "three: " << three << endl;

	cout << endl;

	// Capture all local variables by reference
	[&]() { one = 10; cout << one << ", " << two << ", " << three << endl; } ();
	cout << "one: " << one << endl;

	cout << endl;

	// Capture all local variables by reference by default,
	// but two and three by value
	[&, two, three]() { one = 20; cout << one << ", " << two << ", " << three << endl; } ();
	cout << "one: " << one << endl;

	cout << endl;


    return 0;
}

