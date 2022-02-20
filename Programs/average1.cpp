#include <iostream>

using std :: cout;
using std :: endl;
using namespace std;
int main()
{
	float n1=3.21,n2 = 4.312,sum = n1+ n2,avg = sum / 2;

	cout << "The two numbers are : " << n1 << "," << n2 << endl;
	cout << "Sum : " << sum << endl;
	cout << "Average : " << avg << endl;
	
	//>> this is called as extraction charecter use along with cin to take input from istream
	cout << "Enter your 2 numbers : ";
	cin >> n1 >> n2;
	sum = n1+n2;
	cout << "The two numbers are : " << n1 << "," << n2 << endl;
	cout << "Sum : " << sum << endl;
	cout << "Average : " << avg << endl;

	
	
	
	return 0;
}

