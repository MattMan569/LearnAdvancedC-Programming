// CustomExceptions.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <exception>
using namespace std;


// Custom exception deriving from STL exception class
class MyException : public exception
{
public:
	// Override what() method
	virtual const char * what() const throw()
	{
		return "Something bad happened!";
	}
};

class Test
{
public:
	void goesWrong()
	{
		throw MyException();
	}
};


int main()
{
	Test test;

	try
	{
		test.goesWrong();
	}
	catch (MyException &e)
	{
		cout << e.what() << endl;
	}

    return 0;
}

