#include <iostream>

using namespace std;

int main(){

    int num;

    cout << "Enter number:";cin>> num;

    if(num %2 == 0){
        cout << "The number is odd";
    }else{
        cout << "The number is even";
    }

    return 0;
}