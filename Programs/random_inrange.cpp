#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
	int min , max,range;
	srand(time(0));
	cout << "Enter the range in which you want the values.. " << endl;
	cout << "Min : "  ;
	cin >> min ;
	cout << "Max : " ;
	cin >> max ;
	range = max - min + 1;
	for (int i = 1 ; i <= 100 ; i++ ) 
	{
		cout << rand()%range + min << " " ;
		if ( i % 10 == 0 ) 
			cout << endl;
	}
	return 0;
}
