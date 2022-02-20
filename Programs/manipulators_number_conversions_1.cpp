#include <iostream>

using namespace std ;

int main ()
{
	int num;
	int h = 0XF;
	int g = 020;
	cout << " Enter a number : " ;
	cin >> num;

	cout << "Hexadecimal Equivalent : " ;
	cout << hex ;
	cout << num << endl;
	cout << uppercase ; 
	cout <<	showbase << num << endl ;
	cout << "Octal  Equivalent : " ;
	cout << oct;
	cout << showbase << num << endl ;
	
	cout << dec ;
	cout <<"Decimal equivalent of h : " << showbase << h  << endl;
	cout << "Decimal equivalent of g : " << showbase << g << endl;
	return 0;

}

//decimal -- 1 to 10
//hexaddecimal -- 0 1 2 3 4 5 6 7 8 9 A B C D E F 10 11 12 13 14 ... 19 1A  1B 
//octal - 0 1 2 3 4 5 6 7 10 11 13 14 15 16 17 20 21 22 23 24 
//Here we have new manipulators 
//hex , uppercase ,showbase,dec,oct

