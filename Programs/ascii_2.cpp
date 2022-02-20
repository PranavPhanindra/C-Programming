//Here we use the ASCII values to print the charecters 
//We show the relation btwn ASCII and each charecter by type casting the char to int value


#include <iostream>

using namespace std ;

int main()
{

	for (char c = 32;c <= 126 ; c++ )
	{

		cout << int(c) << "-" << static_cast<int>(c) << "-" << c << "  "  ;
		if (c%5 == 0)
			cout << endl;

	}
	return 0;
}
