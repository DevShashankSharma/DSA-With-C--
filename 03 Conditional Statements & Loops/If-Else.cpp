#include <iostream>
using namespace std;

int main() {
    int n = 45;

    // if - else statement
    if (n >= 0) {
        cout << "The number is positive" << endl ;
    } else {
        cout << "The number is negative" << endl ;
    }

    // if - else if - else statement
    if (n > 0) {
        cout << "The number is positive" << endl ;
    } else if (n == 0) {
        cout << "The number is zero" << endl ;
    } else {
        cout << "The number is negative" << endl ;
    }


    char ch;
    cin >> ch;

    if (ch >= 'A' && ch <= 'Z') {
        cout << "Uppercase" << endl;
    } else if (ch >= 'a' && ch <= 'z') {
        cout << "Lowercase" << endl;
    } else {
        cout << "Not an alphabet" << endl;
    }

    return 0;
}