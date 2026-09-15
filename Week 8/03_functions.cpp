#include<iostream>
#include<string>
using namespace std;

// Declaration, Definition, Calling

// Declaration
void greet();


// Definition
void greet(string name) {   // name is parameter/formal parameter
    cout << "Hello " << name << endl;
}


int main() {
    // Function Calling
    greet("Ahmad");     // "Ahmad" is argument/actual parameter

    return 0;
}