// CPP11Initialization.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <string>
#include <vector>

using namespace std;


int main()
{
	int value{ 5 };
	cout << value << endl;

	string text{ "Hello" };
	cout << text << endl;

	int numbers[]{ 1, 2, 4 };
	cout << numbers[1] << endl;

	// Must specify size when using new
	int * pInts = new int[3] {1, 2, 3};
	cout << pInts[1] << endl;
	delete pInts;

	// Init to default value of 0
	int value1{};
	cout << value1 << endl;

	int * pSomething{ &value };
	cout << *pSomething << endl;

	// Init to nullptr
	int * pSomething2{}; // int * pSomething2 = nullptr;
	cout << pSomething2 << endl;

	// Init array to zero values
	int numbers1[5]{};
	cout << numbers1[1] << endl;

	// Init values in a struct
	struct
	{
		int value;
		string text;
	} s1{ 5, "Hi" };
	cout << s1.text << endl;


	// Init vector values without push_back
	vector<string> strings{ "one", "two", "three" };
	cout << strings[2] << endl;


    return 0;
}

