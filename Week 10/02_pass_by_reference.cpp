#include<iostream>
#include<string>
using namespace std;

void print(int a, int b) {
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
}

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int a = 5;
    int b = 10;

    cout << "Before swap" << endl;
    print(a, b);

    swap(a, b);

    cout << "After swap" << endl;
    print(a, b);

    return 0;
}