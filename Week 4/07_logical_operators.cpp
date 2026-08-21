// Logical operators are used to combine or modify conditions. They work with Boolean values and also produce boolean values as result.
/*
    Logical AND: &&          both conditions must me true
    Logical OR:  ||          at leat one condition must be true
    Logical NOT: !           reverse the boolean result
*/

#include<iostream>
using namespace std;

int main(){
    int age = 19;

    // &&
    bool isTeen = (age>=13) && (age <=19);
    cout << isTeen << endl;     // 1

    // ||
    bool getDiscount = (age <= 12) || (age >= 60);
    cout << getDiscount << endl;    // 0

    // !
    bool isRaining = true;
    bool isNotRaining = !isRaining;
    cout << isNotRaining << endl;   // 0

    return 0;
}