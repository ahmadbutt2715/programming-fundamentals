#include<string>
#include<limits>
#include<iostream>
using namespace std;

int main(){
    string name;

    // cout
    cout << "Enter your name: ";
    cin >> name;        // name will be truncaked if space is used
    cout << name << endl;
    
    // getline
    cout << "Enter your name again: ";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');       // clear the buffer so that getline does not get input from buffer
    getline(cin, name);     // read full line without any truncate
    cout << name << endl;
    

    return 0;
}