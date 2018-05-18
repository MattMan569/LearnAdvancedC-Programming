// StandardExceptions.cpp : Defines the entry point for the console application.
//

// NOTE: Does not compile is VS, use online compiler to test


#include <iostream>
using namespace std;


class CanGoWrong
{
public:
	CanGoWrong()
	{
		char * pMemory = new char[9999999999];
		delete[] pMemory;
	}
};


int main()
{
	try {
		CanGoWrong wrong;
	}
	catch (bad_alloc &e)
	{
		cout << "Caught exception: " << e.what() << endl;
	}

	cout << "Still running!" << endl;

    return 0;
}

