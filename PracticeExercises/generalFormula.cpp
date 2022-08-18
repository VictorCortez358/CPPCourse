#include <iostream>
#include <math.h>

using namespace std;

// Write a program that calculates the solutions of a second degree equation.

int main(){
    
    int a,b,c,result1=0,result2=0;

    cout << "Enter a:";
    cin>> a;

    cout << "Enter b:";
    cin >> b;

    cout << "Enter c:";
    cin >> c;

    result1 = (-b+sqrt(pow(b,2)-4*a*c))/(2*a);
    result2 = (-b-sqrt(pow(b,2)-4*a*c))/(2*a);

    cout << "Result one: " << result1;
    cout << "\nResult two: " << result2;

    return 0;
}   