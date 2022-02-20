#include <iostream>

using namespace std;

int main()
{
	char l[50];

	cout << "Enter a line of text : " ;

	//Reads a defined length of chars
	cin.read(l,20);
	cout.write(l,cin.gcount());

	cout << endl;

	cout << "No of charecters read : " << cin.gcount();
	cout << endl;
	return 0;
}

