#include <iostream>

// Go to program that calculete of the valor that takes the next funcion for
// given values of x and y

using namespace std;

int main()
{
    int price;
    float IVA;
    float priceIVA = 0; 

    cout <<"Price of the product:";
    cin >> price;

    IVA = price * 0.13;
    priceIVA = price + IVA;

    cout << "The price of the product with IVA is: "<< priceIVA;

    return 0;
}