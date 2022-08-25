#include <iostream>
#include <conio.h>

using namespace std;

/*
Write a program that takes every 4 hours the outside temperature, 
reading it during a period of 24 hours, i.e. it should read 6 temperatures. 
Calculate the average temperature of the day, the highest and the lowest temperature.
*/
int main(){
    float temperatura, media,alta=0,baja;
    float suma_temperatura;

    for (int i = 0; i < 24; i+=4){
        cout<< "Digite la temperatura a las "<< i << " :";
        cin >> temperatura;

        suma_temperatura += temperatura;

        if (temperatura > alta){
            alta = temperatura;
        }
        if (temperatura < baja){
            baja = temperatura;
        }
    }

    media = suma_temperatura/6;

    cout << "\n La temperatura media es: "<< media;
    cout << "\n La temperatura mas alta es: "<< alta;
    cout << "\n La temperatura mas baja es: "<< baja;
    
    
    
    
}