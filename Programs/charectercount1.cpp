#include <iostream>
#include <cctype>

using namespace std;

int main()
{
	int uc = 0,lc = 0,dig = 0, pun = 0 ,space = 0;

	char c;

	while(cin.get(c))
	{
		isalnum(c)? ( isdigit(c)? dig++ : ( islower(c)? lc++ : uc++ )) : (ispunct(c)?  pun++ : space++);
	}
	// Here get(c) is used as a member function for istream class 
	//We used the cin which does not take space charecters into input and n
	cout << endl <<"No of lower case chars : " << lc << endl;
	cout << "No of upper case chars : " << uc << endl;
	cout << "No of digits : " << dig << endl;
	cout << "No of special chars : " << pun  << endl;
	cout << "No of space chars : " << space << endl;
	return 0;
}
