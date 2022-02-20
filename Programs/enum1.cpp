#include <iostream>

using namespace std;

int main()
{
	enum open_modes {input , output , append };
	//enum is user defined data type
	//here open_modes is a new data type that we have declared 
	//even if we havent set input to some value it would set itself by default to 0

	open_modes fileopenmode = output;
	//fileopenmode is a variable of open_modes data type and it is set to some value of the data type 
	//so when we set that to a  int value it would give an error 
	
	//fileopenmode = 2 ; gives a compile error 
	cout << " input : " << input  << endl << " output : "<< output << endl << " append : "<< append << endl;
	
	cout << " fileopenmode values : " << append << endl;
	int i =  append;
	cout << "value of i is  : " << i << endl;

	//--------------------------------------------------------------------------------------------------------------
	enum forms { shape = 56 , sphere , cylinder , polygon };

	cout << "shape : " << shape << endl << "sphere : " << sphere << endl << "cylinder : " << cylinder << endl << "polygon : " <<  polygon << endl;

	enum points { point1 = 5,point2 = 7, point3 = 5 ,point4,point5};

	cout << "point1 : " << point1 << endl << "point2 : " << point2 << endl << "point3 : " << point3 << endl << "point4 : " << point4 << endl << "point5 : " << point5 << endl;

	points p1= point2;
	points p2 = p1;

	return 0; 
}
