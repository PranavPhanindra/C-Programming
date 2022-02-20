// static_cast<double>
// setprecision(3)
// setiosflags(ios::fixed | ios:: showpoint)
//program to find the average of n numbers

#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
	int x, sum = 0;
	int i,n;
	
	cout << "Enter the Value of n: ";
	cin >> n;
	cout << "Enter the numbers: \n";

	for(i=0; i<n; i++)
	{
		cin >> x;
		sum = sum + x;
	}
	double average;
	average = static_cast<double>(sum) / i;
	
	cout << setprecision(3)<< setiosflags(ios::fixed | ios::showpoint)<< average;

	
	average = 87;
	cout << average;
	average = 67.3452;
	cout << average;

	return 0;
}
