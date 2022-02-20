#include <iomanip>
#include <iostream>
using namespace std;

int main()
{
	double A = 100;
	double B = 2001.5251;
	double C = 201455.2646;
	
	cout << "Using Showpoint " << endl ;
	cout << showpoint  << "B : " << B << endl << endl ;

	cout << "Using noshowpoint " << endl ;
	cout << noshowpoint << "B : " << B << endl << endl ;
	
	cout << setprecision(20) ;
	
	//Here the no of places after the decimal point is fixed by setprecision(n)
	cout << "Using showpoint " ;
	cout << endl << showpoint <<"A : " << A << endl;

	cout << "Using noshowpoint" << endl ;
	cout << noshowpoint << " A : " << A << endl;


	cout << "Using fixed " << endl << fixed << " C = "  << C << endl ;
	cout << "Using Scientific " << endl << uppercase << scientific << " C = " << C << endl;
	
	return 0;
}

