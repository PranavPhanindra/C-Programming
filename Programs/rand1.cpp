#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
	for (int i = 0; i < 5 ; i++)
		cout << rand() << endl;

	cout << "Maximum number : " <<  RAND_MAX << endl;

	return 0;
}
