// StackAndQueue.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <stack> // LIFO
#include <queue> // FIFO
#include <string>
#include <memory> // unique_ptr

using namespace std;


class Test
{
private:
	string name;

public:
	Test(string name) : name(name) {}

	~Test()
	{
		//cout << "Object " << name << " destroyed!" << endl;
	}

	void print() const
	{
		cout << name << endl;
	}
};


int main()
{
	/* STACK */
	cout << "*** STACK ***" << endl;

	// Last in, first out
	stack<Test> testStack;
	
	// Objects are created, shallow copied to the stack, then destroyed
	// Very inefficient
	testStack.push(Test("Mike"));
	testStack.push(Test("John"));
	testStack.push(Test("Sue"));

	// Get a reference so the object is not copied
	// It is a reference to the object in the stack
	/*
	Test &test1 = testStack.top();
	test1.print();

	testStack.pop();
	*/


	/* This code is invalid, popping destroys the reference
	 * leading to undefined behaviour
	Test &test1 = testStack.top();
	testStack.pop();
	test1.print(); // Refers to destroyed object
	*/

	/*
	Test &test2 = testStack.top();
	test2.print();

	testStack.pop();

	Test &test3 = testStack.top();
	test3.print();
	*/

	// Potential method of "iterating" through a stack
	while (testStack.size() > 0)
	{
		Test &test = testStack.top();
		test.print();
		testStack.pop();
	}


	cout << endl << endl;


	/* QUEUE */
	cout << "*** QUEUE ***" << endl;

	queue<Test> testQueue;

	testQueue.push(Test("Mike"));
	testQueue.push(Test("John"));
	testQueue.push(Test("Sue"));

	cout << "Back: ";
	testQueue.back().print();

	while (testQueue.size() > 0)
	{
		Test &test = testQueue.front();
		test.print();
		testQueue.pop();
	}


	cout << endl << endl;


	/* Stack with no copy creation */
	cout << "*** NO COPY STACK ***" << endl;
	
	stack< unique_ptr<Test> > testStack2;
	testStack2.push(unique_ptr<Test>(new Test("Steve")));
	testStack2.push(unique_ptr<Test>(new Test("Angela")));
	testStack2.push(unique_ptr<Test>(new Test("Tracy")));

	while (testStack2.size() > 0)
	{
		testStack2.top()->print();
		testStack2.pop();
	}
	

	cout << endl << "Exiting..." << endl;

    return 0;
}

