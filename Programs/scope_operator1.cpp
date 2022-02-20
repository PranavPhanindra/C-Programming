#include <iostream>

using std::cout ; //:: scope resolution operator 
using std::endl ; 
// To access a global variable when there is a local variable with same name
// To define a function outside a class.
// If a class having the same name exists inside two namespace we can use the namespace name with the scope resolution operator to refer that class without any conflicts



int m = 10;

int main ()
{
	int m=20;
	{
		int k = m;
		float m =34829348.342;

		cout << "Inner Block : " << endl;
		cout << "K : "<< k << endl;
		cout << "m : " << m << endl;
		cout << " ::m : " << ::m << endl;

	}
	cout << "Outer Block : " << endl;
	cout << "m =" << m << endl;
	cout << "::m : " << ::m << endl;
	
	return 0;
}

