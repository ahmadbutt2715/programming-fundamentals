#include<iostream>
using namespace std;

int main() {
    char c = 'r';

    switch(c) {
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':
            cout << "Vowel" << endl;
            break;
        default:
            cout << "Consonent" << endl;
            break;
    }

    return 0;
}