#include <iostream>

using namespace std;


int main()

{
        char strBuf[11];
        // Read up to 10 characters
        cin.getline(strBuf, 11);
       //invoking the getline fn as a member function of istream class for object cin of istream class
       	cout << strBuf << endl;
	cout << cin.gcount() << " characters were read" << endl;
        // Read up to 10 more characters
        cin.getline(strBuf, 11);
        cout << strBuf << endl;

return 0;

}
