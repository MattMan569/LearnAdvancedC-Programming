// NestedTemplateClasses.cpp : Defines the entry point for the console application.
//

#include "ring.h"

#include <iostream>
#include <string>

using namespace std;





int main()
{
	ring<string>::iterator it;

	it.print();

	
	/*
	ring<string> textring(3);

	textring.add("one");
	textring.add("two");
	textring.add("three");
	textring.add("four"); // Should overwrite the first value, circular buffer

	for (int i = 0; i < textring.size(); i++)
	{
		cout << textring.get(i) << endl; // four two three
	}
	*/


    return 0;
}

