// SortingVectors.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <vector>
#include <string>

using namespace std;


class Test
{
	int id;
	string name;

public:
	Test(int id, string name) : id(id), name(name) {}

	void print() const
	{
		cout << id << ": " << name << endl;
	}
};


int main()
{
	vector<Test> tests;

	tests.push_back(Test(5, "Mike"));
	tests.push_back(Test(10, "Sue"));
	tests.push_back(Test(7, "Raj"));
	tests.push_back(Test(3, "Vicky"));

	for (int i = 0; i < tests.size(); i++)
	{
		tests[i].print();
	}


    return 0;
}

