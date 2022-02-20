#include <iostream>

//To include the mathematical constants, you need to use a #define macro called _USE_MATH_DEFINES and add it before importing the cmath library
#define _USE_MATH_DEFINES
#include <cmath>

using namespace std ;

//Function declaration
float volume(float);
float volume(float , float , float);
float volume(float , float );

int main()
{
	

	cout << "Volume of cube " << endl;
	cout << volume(9) << endl;

	cout << "Volume of Cylinder " << endl;
	cout << volume(4,6) << endl;

	cout << "Volume of cuboid " << endl;
	cout << volume(10,25,15) << endl;

	return 0;
}

float volume(float a)
{
	return pow(a,3);
}

float volume(float r, float h)
{
	return M_PI*pow(r,2)*h;
}

float volume(float l ,float b ,float h)
{
	return l*b*h;
}
