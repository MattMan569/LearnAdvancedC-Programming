// TemplateFunctions.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <string>

using namespace std;


template <typename T> // <class T>
void print(T n)
{
	cout << n << endl;
}


int main()
{
	print<string>("Hello");
	print<int>(5);
	print("Hi there"); // type inference


    return 0;
}

