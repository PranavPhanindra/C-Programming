#include <iostream>

using namespace std;

int main()
{
	char c;
	int x, sum=0, a=1;


	while(cin>>noskipws>>c)
	{
		//or use cin.get(c)
		if(isdigit(c))
		{
			cin.putback(c);
			cin>>x;
			sum = sum*a+x;
			a*=10;
			continue;
		}
	}

	cout<<"sum= "<<sum<<endl;
	return 0;
}
