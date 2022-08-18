#include <iostream>

using namespace std;

int main(){
    int num1,num2;

    cout << "Enter number one: ";
    cin >> num1;

    cout << "Enter number two: ";
    cin >> num2;

    if ( num1 > num2){
        cout <<"The number one is greater";
    }else if( num2 > num1){
        cout <<"The number two is greater";
    }
}