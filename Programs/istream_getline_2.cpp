#include <iostream>

using namespace std;


int main()

{
	char strBuf[11];
	// Read up to 10 characters
	cin.getline(strBuf, 11);
	cout << strBuf << endl;
	// Read up to 10 more characters
	cin.getline(strBuf, 11);
	cout << strBuf << endl;

return 0;

}
