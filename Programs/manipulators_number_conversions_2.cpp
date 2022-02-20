#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int n;
	float m;

	//Input
	cout << "(Takes Decimal )Enter the value of n : " ;
	cin >> n ;
	cout << "(Takes Decimal float )Enter the value of m : " ;
	cin >> m;
	cout << "Decimal out : " << endl << "n : " << n << endl << "m : " << m << endl ;
	cout << "Hexadecimal values of n" << hex << showbase  << uppercase << endl <<"n : " << n << endl << "m : " << m << endl ;
	cout << "Octal values of n" << oct << endl << "n : " << n << endl << "m : " << m << endl ;
	cout <<  endl <<"Hence the floats arent converted to other systems " << endl ;

	cout << endl <<"(Takes Hex)Enter the value of n : " ;
	cin >> hex >> n;
	cout << dec <<"Decimal value of n : " <<  n << endl;
	cout << hex << "Hexadecimal out : " << n <<  endl;
	cout << oct  <<"Octal values of n : " << n << endl;	

	cout << endl <<"(Takes Oct)Enter the value of n : " ;
	cin >> oct >> n;
	cout << dec <<"Decimal value of n : " <<  n << endl;
	cout << hex << "Hexadecimal out : " << n <<  endl;
	cout << oct  <<"Octal values of n : " << n << endl;	
	return 0;
}
