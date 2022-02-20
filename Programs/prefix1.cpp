#include <iostream>

using namespace std;

class _3d 
{
	int x,y,z;
	public :
		_3d () { x = y = z = 0 ; } //Default constructer 
		_3d (int i ,int j , int x ) { x = i ; y = j ; z = k ; }
		
		_3d operator ++(); //Since unary operator no need to have any arguments 

		void show()
		{
			cout << x << " , " << y << " , " << z << endl ;
		}
};

//prefix version member funtion
//

int main()
{
	_3d a(1,2,3) , b ;

	cout << 
