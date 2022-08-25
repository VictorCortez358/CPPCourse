#include <iostream>
#include <conio.h>

using namespace std;


/*
    Make a program that reads from the standard 
    input standard numbers until a zero is entered. 
    count the non-zero numbers entered.
*/

int main(){

    int number;
    int counter = 0;
    do
    {
        cout << "Input number: "; cin >> number;
        if ( number > 0){
            counter++;
        }
        
    } while ( number != 0);

    cout << "The number of non-zero numbers entered are: " << counter;
    
    
    getch();
    return 0;
    
}

