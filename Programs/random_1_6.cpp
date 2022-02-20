#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	srand(time(0));

	for (int i = 0 ; i < 50 ; i++ )
	{
		cout << 1 + rand() % 6 << " " ;
		if (i % 5 == 0)
			cout << endl;
	}
	cout << endl;
	return 0;
}

