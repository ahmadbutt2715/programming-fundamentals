#include<iostream>
using namespace std;

int main() {
    int pin = 1234;
    int balance = 1000;

    int inputPin, withdrawAmount;
    cout << "Enter your PIN: ";
    cin >> inputPin;
    if(inputPin == pin) {
        cout << "Enter amount to withdraw: ";
        cin >> withdrawAmount;
        if(withdrawAmount <= balance) {
            balance -= withdrawAmount;
            cout << "Successfull withdraw" << endl;
            cout << "Remaining balance: " << balance << endl;
        }
        else {
            cout << "Insufficient funds" << endl;
        }
    }
    else {
        cout << "Wrong PIN" << endl;
    }


    return 0;
}