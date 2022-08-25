#include <iostream>

using namespace std;

int main(){

    int number;

    cout << "Enter number between 1 and 5:";
    cin >> number;

    switch (number)
    {
    case 1:
        cout << "The number enter is one";
        break;
    case 2:
        cout << "The number enter is two";
        break;
    case 3:
        cout << "The number enter is three";
        break;
    case 4:
        cout << "The number enter is for";
        break;
    case 5:
        cout << "The number enter is five";
        break;
    
    default:
        cout << "The number is no between 1 and 5";
        break;
    }


    return 0;
}