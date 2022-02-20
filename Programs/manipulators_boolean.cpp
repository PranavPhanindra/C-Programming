#include <iostream>

using namespace std;
int main()
{
	int n1 , n2 ;
	cout << "Enter two number : " ;
	cin >> n1 >> n2;
	cout <<"(n1 < n2) : " << (n1 < n2) << endl;
	cout <<"(n1 > n2) : "<< (n1 > n2) << endl;
	cout <<"(n1 == n2) : " << (n1 == n2) << endl;
	
	cout << endl  <<"Using boolalpha that enables to show booleans as true/false"<< endl; 
	cout << boolalpha;
	cout <<"(n1 < n2) : " << (n1 < n2) << endl;
	cout <<"(n1 > n2) : "<< (n1 > n2) << endl;
	cout <<"(n1 == n2) : " << (n1 == n2) << endl;

	cout << endl  <<"Using noboolalpha that disables boolalpha"<< endl; 
	cout << noboolalpha ;
	cout <<"(n1 < n2) : " << (n1 < n2) << endl;
	cout <<"(n1 > n2) : "<< (n1 > n2) << endl;
	cout <<"(n1 == n2) : " << (n1 == n2) << endl;

	return 0;
}

