// InitializerLists.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <vector>
#include <initializer_list>
#include <string>

using namespace std;


class Test
{
public:
	Test(initializer_list<string> texts)
	{
		for (auto value : texts)
		{
			cout << value << endl;
		}
	}

	void print(initializer_list<string> texts)
	{
		for (auto value : texts)
		{
			cout << value << endl;
		}
	}
};


int main()
{
	vector<int> numbers{ 1, 3, 4, 6 };
	cout << numbers[2] << endl;


	// Create object with initializer list
	Test test{ "apple", "orange", "banana" };

	cout << endl;

	// Initializer list as function parameter
	test.print({ "one", "two", "three", "four" });


    return 0;
}

