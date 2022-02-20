#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	char buf(10);

	cin >> setw(9) >> buf ; // reads 1st eight charecters from input leaving one for terminator
	cout << buf << endl;

	cin >> setw(9) >> buf;
	cout << buf << endl;

	cin >> buf;
	cout << buf << endl;

	return 0;
}
//problem here is that the inout is read into buffer but input is formatted it excludes all the spaces
