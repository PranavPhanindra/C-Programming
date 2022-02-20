#include <iostream>
#include <cctype>

using namespace std;

int main()
{
	int v = 0,ch = 0,dig = 0 ;

	char c;

	while(cin.get(c))
	{
		if (isalpha(c)) 
		{
			// To handle upper case letters
			c = tolower(c);
			if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
				v++;
			else
				ch++;
		}
		else if (isdigit(c))
			dig++;
	}
	cout << endl  <<"Vowels : " << v << endl ;
	cout << "Consonants : " << ch << endl ;
	cout << "Digits : " << dig << endl;
	return 0;

}
