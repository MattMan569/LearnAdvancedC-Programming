// CustomObjectsAsMapValues.cpp : Defines the entry point for the console application.
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
		cout << "Copy constructor running..." << endl;
		name = other.name;
		age = other.age;
	}

	Person(string name, int age) :
		name(name), age(age)
	{}

	void print() const
	{
		cout << name << ": " << age << endl;
	}
};


int main()
{
	// Int key, object as value
	map<int, Person> people;

	people[0] = Person("Mike", 40);
	people[1] = Person("Vicky", 30);
	people[2] = Person("Raj", 20);

	people.insert(make_pair(55, Person("Bob", 45)));
	people.insert(make_pair(55, Person("Bob", 45)));

	for (map<int, Person>::iterator it = people.begin(); it != people.end(); it++)
	{
		cout << it->first << ": ";
		it->second.print();
	}


    return 0;
}

