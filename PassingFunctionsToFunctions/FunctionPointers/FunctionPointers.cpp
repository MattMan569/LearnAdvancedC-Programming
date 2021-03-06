// FunctionPointers.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <string>

using namespace std;


void test()
{
	cout << "Hello" << endl;
}


void parameterizedTest(int value, string name)
{
	cout << "Value: " << value << ", " << "Name: " << name << endl;
}


int main()
{
	cout << "Normal function call: " << endl;
	test();
	cout << endl;


	// Variable, named pTest, that is a pointer to a function
	// with a void return type and no parameters.
	void (* pTest)();


	// Point pTest to the function test()
	// pTest = &test;
	pTest = test;
	// Do not need ampersand as there is no ambiguity
	// The name of a function is a pointer to that function


	// Call the function pointed to by pTest
	cout << "Function pointer call: " << endl;
	(*pTest)();
	cout << endl;
	// *pTest() is incorrect, will interpret as dereferencing
	// the return of a function named pTest()
	// ie) *(ptest()); due to operator precedence


	// The dereference operator is not needed because
	// a pointer to a function with the () operator proceeding it
	// is obviously a call to the function that the pointer
	// points to, as such:
	cout << "Function pointer call with no dereference: " << endl;
	pTest();
	cout << endl;


	// Can immediately initialize the function pointer
	void (* pTest2)() = test;

	cout << "Immediately initialized function pointer call: " << endl;
	pTest2();
	cout << endl;


	cout << endl;


	// Parameterized functions work in a similar way
	cout << "Normal parameterized function call: " << endl;
	parameterizedTest(4, "Mike");
	cout << endl;
	
	// Function pointer named paramTest with two parameters
	// that points to the function parameterizedTest
	void (* paramTest)(int, string) = parameterizedTest;
	cout << "Parameterized function call: " << endl;
	paramTest(9, "Bob");
	cout << endl;
	

    return 0;
}

