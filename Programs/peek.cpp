#include <iostream>

using namespace std;

int main()
{
	char c1,c2,c3;

	c1 = cin.peek();

	cin >> c2;

	cout << "C1 : " << c1 << endl << "C2 : " << c2 << endl;
	cin >> c3;
	cout << "C3 : " << c3 << endl ;

	return 0;
}

