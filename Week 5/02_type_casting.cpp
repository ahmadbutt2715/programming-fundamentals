/* Type casting/conversion is the process of converting a value from one data type to another compatible data type. 
It allows different types of data to work together in expressions, assignments, and function calls. */

// Types 
    // Implicit conversion (automatically): smaller data type to a larger one to avoid data loss
    // Explicit conversion (manually)

#include<iostream>
using namespace std;

int main () {
    int i = 3;
    char c = 'a';

    // Implicit type casting
    cout << c + i << endl;  // 100


    // Explicit type casting 
    cout << (int)c << endl; // 3

    
    return 0;
}