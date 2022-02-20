#include <iostream>
#include <cmath>
using namespace std;

inline float cube(float a)
{ 
	return pow(a,3);
}

int main()
{
	float m;

	cin >> m;
	cout << cube(m) << endl;

	return 0;
}
