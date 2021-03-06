// CustomObjectsAsMapKeys.cpp : Defines the entry point for the console application.
//


#include <iostream>
#include <map>
#include <string>

using namespace std;


class Person
{
private:
	string name;
	int age;

public:
	Person() : name(""), age(0)
	{}

	Person(const Person &other)
	{
		name = other.name;
		age = other.age;
	}

	Person(string name, int age) :
		name(name), age(age)
	{}

	void print() const
	{
		cout << name << ": " << age << flush;
	}

	// C++ doesn't know how to compare custom object with the < operator
	// which the map uses to sort keys.
	// We must overload the operator ourselves.
	bool operator< (const Person &other) const
	{
		// Be able to use the same name with a different
		// age as a unique key
		if (name == other.name)
		{
			return age < other.age;
		}
		else
		{
			return name < other.name;
		}
	}
};


int main()
{
	// Int key, object as value
	map<Person, int> people;

	people[Person("Mike", 40)] = 40;
	people[Person("Mike", 444)] = 123;
	people[Person("Vicky", 30)] = 30;
	people[Person("Raj", 20)] = 20;

	for (map<Person, int>::iterator it = people.begin(); it != people.end(); it++)
	{
		cout << it->second << ": " << flush;
		it->first.print();
		cout << endl;
	}


	return 0;
}

