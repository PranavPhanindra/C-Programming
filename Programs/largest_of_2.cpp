#include <iostream>

using namespace std ;

int main()
{
	int a,b;
	cout << "Enter the values of a and b : " ;
	cin >> a >> b ;
	(a>b)? cout << " a is greater than b" << endl : (a<b)? cout << " a is less than b"<< endl : cout << "a is equal  to b" <<endl ; 
	//Embedded conditional operator	
	


	return (0);
}

