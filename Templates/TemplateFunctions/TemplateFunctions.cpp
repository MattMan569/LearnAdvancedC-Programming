// TemplateFunctions.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <string>

using namespace std;


template <class T> // <typename T>
void print(T n)
{
	cout << "Template version: " << n << endl;
}

void print(int value)
{
	cout << "Non-template version: " << value << endl;
}

template <class T> // <typename T>
void show()
{
	cout << T() << endl;
}


int main()
{
	print<string>("Hello");
	print("Hi there"); // type inference

	print<int>(5); // Template
	print(6); // Non-template, no type inference as print(int) is a closer match
	print<>(7); // Template

	// No argument list, C++ cannot possibly infer the type
	// show();

	show<double>();


    return 0;
}

