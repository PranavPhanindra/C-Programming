#include <iostream>

using namespace std;

int main()
{
	int m,n;
	int p =10;
	int q(p); //Consructers 


	m = (n=182)+8273; //Embedded assignment
	cout << p << " ,  " << q << endl;
	cout << m << " ,    " << n << endl;

	int i = 9;
	int j = i+9;
	cout  << i << " , " <<j << endl;

	//int  b = a+9 , a=19; error 
	//
	
	//int x = y= 21; error 1st we must assign value to y and then only we can assign the variable y to some other variable
	
	return (0);

}

