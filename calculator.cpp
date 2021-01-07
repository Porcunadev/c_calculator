#include <iostream>

using namespace std;

int main()
{
    char op;
    int number1, number2;

    cout << "Please enter a number:";
    cin >> number1;
    cout << "Please enter desired operation: +,-,*,/";
    cin >> op;
    cout << "Please enter the second number:";
    cin >> number2;

    switch (op)
    {
    case '+':
        cout << number1 + number2;
        break;
    case '-':
        cout << number1 - number2;
        break;
    case '*':
        cout << number1 * number2;
        break;
    case '/':
        cout << number1 / number2;
        break;
    default:
        cout << "Please choose valid operator!!!";
        break;
    }

return 0;
}