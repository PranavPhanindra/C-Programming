#include <iostream>
//This should always be before the header file since the header file has to include the macro

//#define NDEBUG
#include <cassert>

//Assertions are statements used to test assumptions made by programmers. 
//If the expression evaluates to 0 (false), then the expression, sourcecode filename, and line number are sent to the standard error, and 
//then abort() function is called. 

using namespace std;

int main()
{
        int x,y=5;
        for (x = 0 ;x<10;x++)
        {
                cout << "X = " << x << "Y = " << y << endl;
                assert(x<y);
        }
        return 0;
}


