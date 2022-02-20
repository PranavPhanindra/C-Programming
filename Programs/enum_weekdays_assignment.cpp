#include <iostream>
#include <cassert>
using namespace std;
enum weekday{ sunday = 1, monday, tuesday, wednesday, thursday, friday, saturday};
void print_day(weekday w)
{
switch(w)
{
        case sunday:
                cout<<"sunday"<<endl;
                break;
        case monday:
                cout<<"monday"<<endl;
                break;
        case tuesday:
                cout<<"tuesday"<<endl;
                break;
        case wednesday:
                cout<<"wednesday"<<endl;
                break;
        case thursday:
                cout<<"thursday"<<endl;
                break;
        case friday:
                cout<<"friday"<<endl;
                break;
        case saturday:
                cout<<"saturday"<<endl;
                break;
}
}
int main()
{
        enum weekday day1, day2;
        int n1, n2;

        cout<< "Enter two days of the week (in numbers): ";
        cin>>n1>>n2;

        assert (n1<=7 && n2<=7 && n1>=1 && n2>=1);

        day1 = (weekday)n1;  //This is a general way of type  casting where we have the  integer value getting typecasted to enum type week
        day2 = (weekday)n2;
        print_day(day1);
        print_day(day2);

        if(day1==day2)
                cout<< "The days are the same!"<<endl;
        else
                cout<<"The days are not the same!"<<endl;
}
 
