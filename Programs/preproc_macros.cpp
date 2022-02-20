#include <iostream> //General inclusion of standard directory 

#include "namespace_header_file1.h" // THis is user defined header file inclusion and the file is in current directory

#define SUM(A,B,C) A+B+C //This is definition of a macro
#define ABCD 2
#define AREA(L,B) L*B

//Now we are doing conditional inclusion generally consists of #if ,#ifdef ,#ifndef ,#endef,#else ,#elif and terminated by #endef 
//Here we use ifdef and endef

using std::endl;

int main()
{
    int l1 = 10, l2 = 5, area;

    area = AREA(l1, l2);
    int perimeter = 2 * SUM(l1,l2,0);
    std::cout << endl <<"Area of rectangle is: " << area << endl;
    std :: cout << "Perimeter : " << perimeter <<  endl;

    //Calling function inuser defined header file
    alias12::pg();

    return 0;
}
