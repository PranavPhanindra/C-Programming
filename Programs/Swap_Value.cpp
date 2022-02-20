#include <iostream>

using std::cout;
using std::cin;
using std::endl;


void swap1(int , int);
void swap2(int * , int *);

int main()
{
	int a,b;

	cout <<"Enter thye values " << endl ;
	cin >> a >> b;
	cout << "Before Swapping : " ;
	cout << a << " " << b << endl;

	cout << "Call by value " << endl;
	swap1(a,b);
	cout << "After Swap by value : " ;
	cout << a << " " << b << endl;
	
	cout << endl <<"Call by reference " << endl;
	swap2(&a,&b);
	cout << "After Swapping : " ;
	cout << a << " " << b << endl;
	
	/*
	 * cout << &a << " " << &b << endl;
	 * cout << *(&a) << " " << *(&b) << endl;
	*/
	return 0;
}

void swap2(int *a,int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
	cout << "Inside Swap2 function " << endl;
	cout << *a << " " << *b << endl;
}

void swap1(int a,int b)
{
	cout << "Inside the swap function" << endl; 
	int temp;
	temp = a;
	a = b;
	b = temp;
	cout << a << " " << b << endl;
}
