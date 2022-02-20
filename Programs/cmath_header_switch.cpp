#include <iostream>
#include <cmath>
//All functions in the math library returns the data type double


using namespace std ;



int main()
{
	cout << "Here we are having a switch case for all cmath header file functions" << endl;
	cout << "Enter your option to use the function" << endl;
	cout << "For trigonometric functions enter the values in radians " << endl; 
	cout << endl    << "1.ceil     7.fabs(x)"   << endl 
	     		<< "2.floor    8.fmod(x,y)" << endl
	     		<< "3.Sin      9.pow(x,y)"  << endl
	     		<< "4.Cos      10.sqrt(x)"  << endl
	     		<< "5.Tan      11.log(x) "  << endl
	     		<< "6.exp(x)   12.log10(x)" << endl << endl;
	int a;
	double x,y;
	cout << "Enter your required option number : " ;
	cin >> a;
	switch(a)
	{
		case 1:
			cout << "Enter the values " << endl;
			cout << "x : " ;
			cin >> x ;
			cout << "ceil(x) : "  << ceil(x) << endl ;
			break;
		case 2:
			cout << "Enter the values " << endl;
			cout << "x : " ;
			cin >> x ;
			cout << "floor(x): "  << floor(x) << endl ;
			break;
		case 3:
			cout << "Enter the values " << endl;
			cout << "x : " ;
			cin >> x ;
			cout<< "Sin(x) : " << sin(x) << endl ;
			break;
		case 4:
			cout << "Enter the values " << endl;
			cout << "x : " ;
			cin >> x ;
			cout<< "Cos(x) : " << cos(x) << endl ;
			break;
		case 5:
			cout << "Enter the values " << endl;
			cout << "x : " ;
			cin >> x ;
			cout << "Tan(x) : " << tan(x) << endl ;
			break;
		case 6:
			cout << "Enter the values " << endl;
			cout << "x : " ;
			cin >> x ;
			cout << "e^" << x << " : " << exp(x) << endl;
			break;
		case 7:
			cout << "Enter the values " << endl;
			cout << "x : " ;
			cin >> x ;
			cout << "Absolute value of x : " << fabs(x) << endl ;
			break;
		case 8:
			cout << "Enter the values " << endl;
			cout << "x : " ;
			cin >> x ;
			cout << "y : " ;
			cin >> y ;
			cout << "x|y : " << fmod(x,y) << endl;
			break;
		case 9:
			cout << "Enter the values " << endl;
			cout << "x : " ;
			cin >> x ;
			cout << "y : " ;
			cin >> y ;
			cout << "x^y : " << pow(x,y) << endl;
			break;
		case 10:
			cout << "Enter the values " << endl;
			cout << "x : " ;
			cin >> x ;
			cout << "sqrt(x) : " << sqrt(x) << endl;
			break;
		case 11:
			cout << "Enter the values " << endl;
			cout << "x : " ;
			cin >> x ;
			cout << "log(x) : " << log(x) << endl;
			break;
		case 12 :
			cout << "Enter the value " << endl ;
			cout << "x : " ;
			cin >> x;
			cout << "log10(x) : " << log10(x) << endl;
			break;
		default :
			cout << "Enter valid input " << endl;
	}
	return 0;

}
