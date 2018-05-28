// DecltypeAndTypeid.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <typeinfo> // typeid
#include <string>

using namespace std;


int main()
{
	string value;

	cout << typeid(value).name() << endl;

	
	// Declare a variable of the same type as the passed paramter
	decltype(value) name = "Bob";

	cout << typeid(name).name() << endl;
	cout << name << endl;


    return 0;
}

