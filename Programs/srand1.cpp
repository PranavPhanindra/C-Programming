#include <iostream>

#include <cstdlib>

using namespace std;

int main()
{
	int s;

	cout << "Enter seed : " ;
	cin >> s;
	srand(s);

	for (int i = 0 ; i < 5 ; i++)
		cout << rand() << endl;

	return 0;
}
