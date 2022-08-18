#include <iostream>
#include <math.h>

// Go to program that calculete of the valor that takes the next funcion for
// given values of x and y

using namespace std;

int main(){
    float x,y,result=0;

    cout << "Enter x:";
    cin >> x;

    cout <<"Enter y:";
    cin >> y;

    result = (sqrt(x))/(pow(y,2)-1);

    cout << "The result is:"<< result;

    return 0;
}