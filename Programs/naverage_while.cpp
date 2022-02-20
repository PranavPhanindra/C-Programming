//program for avg of n numbers using while loop
//
#include <iostream>
using namespace std ;

int main()
{
        float x , sum = 0;
        int n ;
        cout << "Enter the value of n : ";
        cin >> n;
        int i=0;
        while (i < n)
        {
                cin >> x;
                sum += x;
                i++;
        }
        float average = sum /n ;
        cout << "Average = " << average << endl;
        return 0;
}

