#include <iostream>

using namespace std;

int main()
{
    int num1,num2;
    int sum = 0;
    int res = 0;
    float div = 0;
    int multi = 0;

    cout << "Enter the first number: ";
    cin >> num1;

    
    cout << "Enter the second number: ";
    cin >> num2;

    sum = num1 + num2;
    res = num1 - num2;
    div = num1 / num2;
    multi = num1 * num2;

    cout << "\nResult of the sum:" << sum;
    cout << "\nResult of the subtract:" << res;
    cout << "\nResult of the division:" << div;
    cout << "\nResult of the multiplication:" << multi;

    return 0;
}