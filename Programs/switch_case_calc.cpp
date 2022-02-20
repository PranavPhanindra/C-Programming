# include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    char op;
    float num1, num2;

    cout << "Enter operator: +, -, *, / % : ";
    cin >> op;

    cout << "Enter two operands ";
    cout << endl << "		num1 : " ;
    cin >> num1;
    cout << "		num2 : " ;
    cin >> num2;

    switch(op)
    {
        case '+':
            cout << num1 << " + " << num2 << " = " << num1 + num2<< endl;
            break;

        case '-':
            cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
            break;

        case '*':
            cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
            break;

	case '/':
            cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
            break;

	case '%':
	   cout << num1 << "%" << num2 << "=" << floor(fmod(num1,num2)) << endl;
	   break; 

	default:
            // If the operator is other than +, -, * or /, error message is shown
            cout << "Error! operator is not correct " << endl ;
            break;
    }

    return 0;
}
