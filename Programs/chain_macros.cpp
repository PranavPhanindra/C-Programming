// C++ program to illustrate macros
#include <iostream>

using namespace std;

//These are chain macros 
#define TREE BRANCH
#define BRANCH 27382

//Macros that  are some what similar to functions more precisely an expression 
#define min(a,b) ((a<b)? a:b)

// Multi-line Macro definition
//Acts as an object
#define ELE 1, \
	    2, \
            3

// Driver Code
int main()
{
	// Array arr[] with elements
	// defined in macros
	int arr[] = { ELE };
	int a,b;
	// Print elements
	printf("Elements of Array are:\n");

	for (int i = 0; i < 3; i++)
       	{
		cout << arr[i] << ' ';
	}
	cout << endl;
	cout << "Chain Macros " << endl;
	cout << TREE << endl;
	cout << "Enter any 2 numbers : " ;
	cin >> a >> b; 
	cout << "Minimum of these two : " << min(a,b) << endl;
	return 0;

}
