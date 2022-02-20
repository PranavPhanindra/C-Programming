//program average for n elements 
#include <iostream>

using namespace std ;

int main()
{
        float x,sum = 0;
        int n;
        cout << "Enter the value of n : ";
        cin >> n;
        for(int i = 0;i<n;i++)
        {
                cin >> x;
                sum = sum + x;
        }
        float average = sum/n; //dynamic initialization of vaariable
        cout << "Average = " << average << endl;
        return 0;
}

