#include <iostream>

using namespace std;

int main()
{
	int age;
	while(1)
	{
		cout << "Enter your age : " ;
		cin >> age ;

		if (cin.fail()) //This is for checking whether the input entered is of the right type 
		       		//Alternate can also be used ie !cin which is a shortcut 	
		{
			cin.clear();   //Resets state bits(state bits are nothing but error flags) to good bit allowing to use ignore 
			cin.ignore(1000,'\n');
			continue;
		}
		if (age <= 0)
			continue;
		break;
	}
	cout << "Entered age is : " << age << endl;
	
	string str;     //If we have some input similar to 213123jdnfjsdfs so the integer value is accepted in the whole given input  
	cin >> str;     //but still the the string input is in the input stream hence the input stream is already occupied not allowing to ask further input
	cout << str << endl; //so the non integer part is givenn as output
}
