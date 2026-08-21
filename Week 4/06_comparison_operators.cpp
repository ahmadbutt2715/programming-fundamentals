// Comparison operators (also called relational operators) are used to compare two values.
// The result of a comparison is always a Boolean value: true → 1  or  false → 0

/*
    ==, !=, >, <, >=, <=
*/


#include<iostream>
using namespace std;

int main(){
    int a = 10;
    int b = 2;
    cout << "a = " << a << endl << "b = " << b << endl << endl;

    cout << "a == b = " << (a == b) << endl;  // 0
    cout << "a != b = " << (a != b) << endl;  // 1
    cout << "a > b = " << (a > b) << endl;  // 1
    cout << "a < b = " << (a < b) << endl;  // 0
    cout << "a >= b = " << (a >= b) << endl;  // 1
    cout << "a >= b = " << (a >= b) << endl;  // 1

    return 0;
}