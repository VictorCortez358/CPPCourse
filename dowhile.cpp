#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){

    int i;
    i = 1;

    // First execute the do and then the sequence
    do
    {
        cout << i << endl;
        i++;
    } while ( i <=10);
    

    system("pause"); // Allows the program not to close automatically
    return 0;
    
}