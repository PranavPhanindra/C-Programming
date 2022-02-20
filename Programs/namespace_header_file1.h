// file1.h
#include <iostream>

using std::cout;
using std::endl;

namespace foo
{
	int value()
	{cout << endl <<"Header file works" << endl;return 0;}
}

namespace name1
{
	namespace name2
	{
		int  pg(); //Functio declaration 
		namespace name3
		{
			int var = 42;
		}
	}
}
// Aliasing
namespace alias123 = name1::name2::name3;
namespace alias12 = name1::name2;

//Defining the function outside the namespacevp
int alias12::pg() 
{cout <<endl <<"This is an example of alias12 " << endl;return 0;}
