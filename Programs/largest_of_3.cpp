#include <iostream>

using namespace std;

int main()
{
	int a,b,c;
	cout << "Enter the numbers : " ;
	cin >> a >> b >> c;
	cout << "For " << endl << "a = " << a << endl << "b = " << b << endl << "c = " << c << endl;
	(a > b)?((c > a)? cout << "c is the largest of all" << endl : cout << "a is largest of all" << endl) : ((b>c)? cout << "b is largest of all"<< endl : cout << "c is largest of all" << endl);
	return(0);
}	
