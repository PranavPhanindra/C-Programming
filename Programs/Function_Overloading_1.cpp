#include <iostream>

using std::cout;
using std::endl;
using std::cin;

//Function declaration 
int max(int , int );
int max(int ,int , int );

int main()
{
	int a,b,c;
	cout << "Enter the values of a , b , c " << endl;
	cin >> a >> b >> c;
	cout << max(a,b) << endl;
	cout << max(a,b,c) << endl;
	return 0;
}

int max(int a,int b)
{
	cout << "Max(a,b) : " ;
	return (a > b ? a : b);
}

int max(int a, int b , int c )
{

	cout << "Max(a,b,c) : " ;
	return ( a > b ? (a > c ? a : c) : (b > c ? b : c));
}
