#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	string buf ;
	
	getline(cin,buf,'#');
	cout << buf << endl;
	return 0;
	//Here we have the getline as a function but not as member function
	//Here # acts as the terminating charecter 
	//THis is for string input not for CHAR input  
}
