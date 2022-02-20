#include <iostream>
#include <limits.h>
#include <cfloat>

using namespace std;

int main()
{
	
	
	cout << "No of bits in the chae CHAR_BIT :		 " <<  CHAR_BIT << endl;
	cout << "Signed char :					 " << SCHAR_MIN << " to " << SCHAR_MAX << endl;
	cout << "Unsigned char max value :			 " << UCHAR_MAX << endl;	
	cout << "Charecter :					 " << CHAR_MIN << " to " << CHAR_MAX << endl << endl ;

	cout << "Short int values :				 " << SHRT_MIN << " to " << SHRT_MAX << endl;
	cout << "Unsigned Short int maximum value :		 " << USHRT_MAX << endl;
	cout << "Integer range :				 " << INT_MIN << " to " << INT_MAX << endl;
	cout << "Unsigned integer range :			 " << 	UINT_MAX << endl;
	cout << "Long int ranges :				 " << LONG_MIN << " to " << LONG_MAX	<< endl;
	cout << "Unsigned Long integer :			 " << ULONG_MAX	 << endl ;
	cout << "Long Long integer ranges :			 " << LLONG_MIN << " to " << LLONG_MAX << endl ;
	cout << "Unsigned Long Long integer :			 " << ULLONG_MAX << endl << endl ;
	
	cout << "Float range :					 " << FLT_MIN << " to "<< FLT_MAX  << endl;
        cout << "Double range :					 " << DBL_MIN << " to " << DBL_MAX << endl;
	cout << "Long Double range :				 " << LDBL_MIN << " to " << LDBL_MAX << endl ;

	return 0;

}
