#include <iostream>

using namespace std;


int main()
{
	int i,total = 100;

	int &sum = total; //Here sum is declared as a reference variable

	cout << "Total = " << total << endl;
	cout << "Sum = " << sum << endl;

	total += 50;
	cout << "Total = " << total << endl;
	cout << "Sum = " << sum << endl;

	sum += 500;
	cout << "Total = " << total << endl;
	cout << "Sum = " << sum << endl;

	sum = 0;
	cout << "Total = " << total << endl;
	cout << "Sum = " << sum << endl;

	return 0;


}
