#include <iostream>
#include <conio.h>

using namespace std;

// Make a program that asks for a 
// number from 1 to 10 and displays its respective multiplication table.

int main(){
    int number;

    do
    {
        cout << "Input number: "; cin >> number;
    } while ((number <1)||(number>10));

    for (int i = 1; i <= 10; i++)
    {
        cout << number << " * " << i << " = " << number * i<< endl;
    }
    
    getch();
    return 0;
    
}