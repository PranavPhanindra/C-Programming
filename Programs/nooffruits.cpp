#include <iostream>

using namespace std;

int main()
{
	int a,m;

	cout << "Enter no of apples : ";
	cin >> a ;
	cout << "Enter no of mangoes : ";
	cin >> m;

	((a+m)>0)?( ((a+m)==1)? cout << "There is only one fruit." << endl : cout << "There are " << a+m << " fruits."<< endl) : (cout << "There are no fruits " << endl) ;


	cout << "There "
	     << ((a+m == 0)? "are " : ((a+m ==1)? "is " : "are "))
	     << a+m 
	     << (((a+m == 0)||(a+m  != 1))? " fruits .":" fruit .")<<endl;
}

