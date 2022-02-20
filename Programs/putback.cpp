#include <iostream>

using namespace std;

int main()
{
        char c1,c2,c3;
        cin.get(c1);
        cout << "C1 : " << c1 << endl;

        cin.putback(c1);

        cin >> c2;
        cout << "C2 : " << c2 << endl;

        cin >> c3;
        cout << "C3 : " << c3 << endl;

        cin.putback('a');

        cin >> c3;
        cout << "C3 : " << c3 << endl;

        return 0;
}

