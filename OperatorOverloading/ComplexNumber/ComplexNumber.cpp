// ComplexNumber.cpp : Defines the entry point for the console application.
//

#include "Complex.h"

using namespace std;


int main()
{
	Complex c1(2, 3);
	Complex c2(c1);
	Complex c3 = c2;

	c1 = c2;

	cout << c1 << endl << c2 << endl << c3 << endl;


    return 0;
}

