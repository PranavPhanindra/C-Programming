//Here we show that the charecter values are stored as integer types following ASCII standards
//
//


#include <iostream>

using namespace std ;

int main()
{
	int i;

	for (char c = 0;c <= 126 ; c++ )
	{
		i = c;

		cout << i << "-" << c << "  ";
	}
	cout << endl;
	return 0;
}
