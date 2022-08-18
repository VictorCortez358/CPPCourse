#include  <iostream>

using namespace std;

int main(){
    int openingBalance = 1000,option,money;

    cout << "\tWelcome to your virtual ATM"<<endl;
    cout << "\n1. Deposit money into your account";
    cout << "\n2. Withdraw money from the account";
    cout << "\n3. Exit";
    cout << "\n4. Option:";
    cin >> option;

    switch (option)
    {
    case 1:
        cout << "Money to be deposited: ";
        cin >> money;
        openingBalance += money;
        cout << "Money in account:"<< openingBalance;
        break;
    case 2:
        cout << "Money to be withdrawn: ";
        cin >> money;
        if( money > openingBalance){
            cout << "Does not have sufficient funds";
            break;
        }else{
            openingBalance -= money;
            cout << "Money in account:"<< openingBalance;
            break;
        }
    default:
        cout << "Exit...";
        break;
    }
}