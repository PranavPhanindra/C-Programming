#include <iostream>

using namespace std;

template <class T>

T maximum(T v1 , T v2 ,T v3)
{	
	T max = v1;

	if (v2 > max) 
		max = v2;
	if(v3 > max)
		max = v3;

	return max;
}


int main()
{
	int n1,n2,n3;
	cout << "Enter three integers : " ;
	cin >> n1 >> n2 >> n3 ;
	cout << "Largest of all integers : " << maximum(n1 , n2 , n3) << endl;

	float f1,f2,f3;
	cout << "Enter three float: " ;
	cin >> f1 >> f2 >> f3 ;
	cout << "Largest of all floats : " << maximum(f1 , f2 , f3) << endl ;
	
	double d1,d2,d3;
	cout << "Enter three double: " ;
	cin >> d1 >> d2 >> d3 ;
	cout << "Largest of all doubles : " << maximum(d1 , d2 , d3) << endl ;
	
	char c1,c2,c3;
	cout << "Enter three chars : " ;
	cin >> c1 >> c2 >> c3 ;
	cout << "Largest of all chars : " << maximum(c1 , c2 , c3) << endl;
	
	string s1,s2,s3;
	cout << "Enter three strings : " ;
	cin >> s1 >> s2 >> s3 ;
	cout << "Largest of all strings : " << maximum(s1 , s2 , s3) << endl;

	return 0;
}

