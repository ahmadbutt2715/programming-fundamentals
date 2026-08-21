// Escape sequence is a special combination of characters that starts with a backslash \ and represents something that is difficult or impossible to type directly inside a string or character.


/* 
    \n      // new line
    \t      // tab
    \\      // backslash
    \"      // double quote
    \'      // single quote
    \r      // carriage return      (move the curser to the beginning of line)
    \b      // backspace            (move the curser one step back)
    \0      // null character       (usuallu use in storing strings)
*/


#include<iostream>
using namespace std;

int main(){
    cout << "I am a boy. \nMy name is Ahmad" << endl;
    cout << "Name\tAge" << endl;
    cout << "Quaid e Azam said \"Work Work and Work\"" << endl;
    cout << "He said \'Hello\'" << endl;
    cout << "Quaid e Azam said\rWork" << endl;
    cout << "a will be replace by c: a\bc" << endl;
    cout << '\0' << endl;

    return 0;
}