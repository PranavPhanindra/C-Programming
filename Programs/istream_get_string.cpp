#include <iostream>
#include <iomanip>
using namespace std;


int main()

{
	int i=0;
	char strBuf[11];
	while(cin.get(strBuf, 11))
	{
		cout << strBuf << endl;
		i++;
		cout << i << endl;
	}
	return 0;
}
