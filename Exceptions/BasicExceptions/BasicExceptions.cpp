// BasicExceptions.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <string>
using namespace std;


void mightGoWrong()
{
	bool error1 = false;
	bool error2 = true;

	if (error1)
	{
		// Throw simple int error code
		throw "Something went wrong.";
	}

	if (error2)
	{
		throw string("Something else went wrong.");
	}
}

void usesMightGoWrong()
{
	mightGoWrong();
}


int main()
{
	try
	{
		usesMightGoWrong();
	}
	catch (int e)
	{
		cout << "Error code: " << e << endl;
	}
	catch (const char * e)
	{
		cout << "Error message: " << e << endl;
	}
	catch (string &e)
	{
		cout << "String error message: " << e << endl;
	}

	cout << "Still running!" << endl;

    return 0;
}
