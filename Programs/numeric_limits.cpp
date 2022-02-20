#include <iostream>

using namespace std ;
#include <cfloat>
#include <limits>
#include <float.h>
int main()
{
	cout << "The Range of type SHORT is from" << numeric_limits<short>::min() << " to " 
		                                  << numeric_limits<short>::max() << endl;
	
	cout << "The Range of type INT is from" << numeric_limits<int>::min() << " to " 
					  	<< numeric_limits<int>::max() << endl;
	
	cout << "The Range of type LONG  is from" << numeric_limits<long>::min() << " to " 
		                                  << numeric_limits<long>::max() << endl;

	cout << "The Range of type FLOAT is from" << numeric_limits<float>::min() << " to " 
		                                  << numeric_limits<float>::max() << endl;

	cout << "The Range of type DOUBLE is from" << numeric_limits<double>::min() << " to " 
		                                   << numeric_limits<double>::max() << endl;
	
	cout << "The Range of type LONG DOUBLE is from" << numeric_limits<long double>::min() << " to " 
		                                        << numeric_limits<long double>::max() << endl;
	
	return 0;
}

