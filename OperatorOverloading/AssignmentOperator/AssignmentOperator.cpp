// AssignmentOperator.cpp : Defines the entry point for the console application.
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
	Test test1(10, "Mike");
	cout << "Test 1: " << flush;
	test1.print();

	Test test2(20, "Bob");

	test2 = test1;
	cout << "Test 2: " << flush;
	test2.print();

	Test test3;
	test3 = test2 = test1;
	// test3.operator=(test2.operator=(test1));
	// This is why operator= must return an object to allow for
	// assignment chaining
	cout << "Test 3: " << flush;
	test3.print();

	Test test4;
	test4.operator=(test3);
	cout << "Test 4: " << flush;
	test4.print();

	cout << endl;

	// Does not use the assignment operator
	// Copy initialization
	// Will instead invoke the copy constructor
	Test test5 = test1;
	test5.print();


    return 0;
}

