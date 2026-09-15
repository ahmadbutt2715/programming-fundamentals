// When we pass array as function parameters, it always pass as reference(means changing in the function will also reflect in the main)
/* The reason behind it is that the name of array is itself a pointer that points to the first memory location of array, and when 
we pass it as a function parameter we actually pass the actual array not a copy */

#include<iostream>
using namespace std;

void doubleArray(int arr[], int n) {
    for(int i=0; i<n; i++) {
        arr[i] = arr[i] * 2;    // changing in actual array
    }
}

int main() {
    int arr[3] = {1, 2, 3};

    doubleArray(arr, 3);

    for(int i=0; i<3; i++) {    // changes in function will reflect here
        cout << arr[i] << ' ';
    }

    return 0;
}