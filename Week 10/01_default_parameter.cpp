// A default parameter is a parameter that already has a value in a function definition. 
// If you call the function without providing a value for that parameter, C++ uses the default value automatically.

#include<iostream>
#include<string>
using namespace std;

void greet(string name = "Ahmad") {
    cout << "Hello " << name << endl; 
}

int main() {
    greet();
    greet("Usama");

    return 0;
}