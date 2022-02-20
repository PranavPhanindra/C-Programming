#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	srand(time(0));
	int f1=0,f2=0,f3=0,f4=0,f5=0,f6=0;
	for (int i = 1 ; i <= 6000 ; i++ )
	{
		int r = 1 + rand()%6;
		cout << r << " " ;
		switch(r)
		{
			case 1:
				f1++;
			case 2:
				f2++;
			case 3:
				f3++;
			case 4:
				f4++;
			case 5:
				f5++;
			case 6:
				f6++;
		}
		if (i % 100  == 0)
			cout << endl;
	}
	cout << endl;
	cout << "f1 : " << f1 ;
	cout << endl;
	cout << "f2 : " << f2 ;
	cout << endl;
	cout << "f3 : " << f3 ;
	cout << endl;
	cout << "f4 : " << f4 ;
	cout << endl;
	cout << "f5 : " << f5 ;
	cout << endl;
	cout << "f6 : " << f6 ;
	cout << endl;
	return 0;
}

