#include<iostream>
using namespace std;

int main() {
    for(int i = 1; i <= 5; i++) {
        if(i==3) continue;  // skip the current iteration
        cout << i << ' ';
    }
    cout << endl;
    for(int i = 1; i <= 5; i++) {
        if(i==3) break;;  // terminate the loop
        cout << i << ' ';
    }
    
    return 0;
}