/*
Declaration

enum class EnumName{ Value1, Value2, ... ValueN};

Initialisation

EnumName ObjectName = EnumName::Value;

*/

// C++ program to demonstrate working
// of Enum Classes

#include <iostream>
using namespace std;

int main()
{

	enum class Color { Red,	Green,Blue };
	//Color is object of enum class 
	
	enum class Color2 { Red,Black,White };

	enum class People { Good,Bad };

	// An enum value can now be used
	// to create variables this wasnt allowed in enum user defined data type
	int Green = 10;

	// Instantiating the Enum Class
	Color x = Color::Green;

	// Comparison now is completely type-safe
	if (x == Color::Red)
		cout << "It's Red\n";
	else
		cout << "It's not Red\n";

	People p = People::Good;

	if (p == People::Bad)
		cout << "Bad people\n";
	else
		cout << "Good people\n";

	// gives an error implicit conversion into integer values 1 & 0 isnt done here in class 
	// its like comparing 2 different objects that doesnt fall under same class
	//if(x == p)
	//cout<<"red is equal to good";

	// won't work as there is no
	// implicit conversion to int
	// cout<< x;

	cout << int(x);

	return 0;
}

