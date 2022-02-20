#include <iostream>

using namespace std;

int main()
{
	int i = 1;
	for (char c = ' '  ; c <= '-' ; c++ , i++ )
	{
		cout << int(c) << " " << c << " " ;
		if (i%5 == 0)
			cout << endl;
	}
	cout << endl;
		
	return 0;
}
