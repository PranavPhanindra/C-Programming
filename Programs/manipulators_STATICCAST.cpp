#include <iostream>
#include <iomanip>//THis is a header file including parametric manipulator functions such as setw etc

using namespace std ;

int main()
{
	int m=1008,n=108,p=18;
	
		
	cout << "M = " << m << endl;
	cout << "N = " << n << endl;
	cout << "P = " << p << endl;

	cout << endl <<"Using setw" << endl;
	cout << "M = " << setw(7) <<  m << endl ;
	cout << "N = " << setw(7) <<  n << endl ;
	cout << "P = " << setw(7) <<  p << endl ;

	
	cout << showbase << uppercase << hex;	
	cout << "Towards left setw(7) << left " << endl << endl;
	cout << "M = " << setw(7) << left <<  m << endl;
	cout << "N = " << setw(7) << left <<  n << endl;
	cout << "P = " << setw(7) << left <<  p << endl << endl;

	cout << dec;
	cout << "Usage of showpos" << endl << endl;
	cout << showpos << m << endl;
	cout << showpos << n << endl;
	cout << showpos << p << endl << endl;
	
	cout << "Usage of noshowpos" << endl <<endl;
	cout << noshowpos << m << endl;
	cout << noshowpos << n << endl;
	cout << noshowpos << p << endl<< endl;

	cout << "Usage of fill " << endl<<endl;
	cout.fill('*');
	cout << "M = " << setw(7) <<  m << endl;
	cout << "N = " << setw(7) <<  n << endl;
	cout << "P = " << setw(7) <<  p << endl<< endl;
	cout << "M = " << right << setw(7) <<   m << endl;
	cout << "N = " << right << setw(7) <<   n << endl;
	cout << "P = " << right << setw(7) <<   p << endl << endl;

	cout << "Usage of internal " << endl<<endl;
	cout << "M = " << setw(7) <<internal << m << endl;
	cout << "N = " << setw(7) <<internal << n << endl;
	cout << "P = " << setw(7) <<internal << p << endl<<endl;

	return 0;
}

