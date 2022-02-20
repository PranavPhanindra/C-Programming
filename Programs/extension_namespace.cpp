// C++ program to demonstrate namespace exntension
// Here we have same namespace getting extended in a different block
//Also ways to access namespace 

#include <iostream>
#include "namespace_header_file1.h"

//This header file includes its own functions that can be accessed and we used a namespace in that 
//even the general way where we acces std::cout or std::endl is also the same 

using namespace std;

// first name space
namespace first
{
int val1 = 500;
}

//extension of the namespace
// rest part of the first namespace
namespace first
{
int val2 =val1*val1;
int val3 = val1*val2;
}

using namespace first;
int main()
{
cout <<"first :: val2 : "<< first::val2 <<"\n";
cout <<"first :: val3 : "<< first::val3 <<"\n";
cout << "val1 : " << val1 << endl;
cout << foo::value();
cout <<endl <<"alias123 of nested namespaces nam1 :: name2 :: name3 : " << alias123::var << endl;
cout << "alias12 of nested namespaces nam1 : " << alias12::pg() << endl;

return 0;
}

