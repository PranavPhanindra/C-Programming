#include <iostream>

using namespace std ;

//Function Prototype and default parameters assignment 
float  poly(float,float,float=0,float=0,float=0);

int main()
{
	float x ;
	cout << "Enter the value of x : " ;
	cin >> x;

	//Evaluation of constant polynomial
	cout << "p(x,7) : " << poly(x,7) << endl;

	//Evaluation of linear  polynomial
	cout << "p(x,7,6) : " << poly(x,7,6) << endl;
	
	//Evaluation of quadratic  polynomial
	cout << "p(x,7,6,5) : " << poly(x,7,6,5) << endl;
	
	//Evaluation of cubic polynomial
	cout << "p(x,7,6,5,4) : " << poly(x,7,6,5,4) << endl;

	return 0;

}

float poly(float x,float a0,float a1,float a2,float a3)
{
	return a0 + (a1 + ( a2 + a3 *x) *x) *x;
}
