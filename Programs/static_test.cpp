#include <iostream>

using namespace std;

int main()
{
	{
		static int c = 0;
		c++;
		cout << c;
		int e = 5;
		cout << endl << e;
	}

//	cout << endl << c;	

	return 0;
}
