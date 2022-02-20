//program to find the average of n numbers
//This program calculates the average of the values that we enter and wouldnt stop until we stop 
//So there is no need for us to take no of values

//Author : M.Pranav Phanindra Sai


#include <iostream>
#include <iomanip>//Used for parametrized manipulators  
using namespace std;

int main()
{
        int i, x,sum=0;
        cout << "Enter the numbers : " << endl;
        for ( i=0 ;cin>>x;sum += x,i++);
        float avg = static_cast<double>(sum)/i;  //The C++ style of type casting we do this since if we simply state avg = sum/i we wouldget our floating digits or the digits after decimal truncated since we are opeating between integers i and sum 
        //for (;;) loop of this form is called infinite loop and we use break statement to come out of such a loop 
        //we type cast in c as follows  variable_1 = (data_type)variable_2
        cout << " Average : " << avg << endl;
        cout <<"Average : " << fixed << avg << endl;
        cout <<"Average : "<< setprecision(15) <<avg << endl;
        //We have 2 types of manipulators one is parametrized and other is non parametrized 
        //setprecision is parametrized and the other ones fixed and endl are non parametrized
        cout << setprecision(3) << "Average : " <<scientific <<avg <<endl ;
        int y =10;
        cout <<  y << endl;
        return 0;
}
