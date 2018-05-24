// InsertionOperator.cpp : Defines the entry point for the console application.
//


#include <iostream>
#include <string>

using namespace std;


class Test
{
private:
	int id;
	string name;

public:
	Test() : id(0), name("") {}

	Test(int id, string name) : id(id), name(name) {}

	void print() const
	{
		cout << id << ": " << name << endl;
	}

	Test & operator=(const Test & other)
	{
		cout << "Assignment running!" << endl;

		id = other.id;
		name = other.name;

		return *this;
	}

	Test(const Test & other)
	{
		cout << "Copy constructor running!" << endl;

		id = other.id;
		name = other.name;

		// Can also call the = operator
		// operator=(other);
		// *this = other;
	}
};


int main()
{



    return 0;
}

