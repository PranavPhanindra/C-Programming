//Generate random integers from 0 to 14
//Using modulus of a number 

#include <iostream>

#include <cstdlib>

using namespace std;

int main()
{
	srand(time(0));

	for (int i = 0 ; i < 5 ; i++)
		cout << rand() % 15 << " " ;
	cout << endl;
	return 0;
}
