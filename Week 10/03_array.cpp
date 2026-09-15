#include<iostream>
#include<string>
using namespace std;


int main() {
    int arr[3];     // declare array
    
    // taking input into array 
    cout << "Enter three numbers: ";
    cin >> arr[0] >> arr[1] >> arr[2];

    // printing array
    cout << arr[0] << ' ' << arr[1] << ' ' << arr[2];
    

    return 0;
}
