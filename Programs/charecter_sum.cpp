#include <iostream>

using namespace std;

int main()
{       
        int m,n;
        
        char c;
        
        while(cin.get(c))
        {       
                if (isdigit(c))
                {       
                        cin.putback(c);
                        cin >> m;
                        break;
                }
        }  

	
	while (cin.get(c))
	{
		
		if (isdigit(c))
		{
			cin.putback(c);
			cin >> n;
			break;
		}
	}
	cin.ignore(80, '\n');
	cout << "m+n = " << m+n << endl;
return 0;
}


