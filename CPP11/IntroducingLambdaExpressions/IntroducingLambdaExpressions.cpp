// IntroducingLambdaExpressions.cpp : Defines the entry point for the console application.
//

#include <iostream>

using namespace std;


// Function test takes a function pointer as an argument
void test(void (*pFunc)())
{
	pFunc();
}


int main()
{
	// Define and assign a lambda expression to variable "func"
	auto func = []() { cout << "Hello" << endl; };

	// Call the lambda expression
	func();


	// Define and then call a lambda expression
	[]() { cout << "Hi" << endl; } ();


	// Pass the lambda expression to the function "test"
	test(func);


	// Define a lambda expression directly in the parameter list
	test([]() { cout << "Hey there" << endl; });


    return 0;
}

