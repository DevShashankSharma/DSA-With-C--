#include <iostream>
using namespace std;

void changeArr(int arr[], int len) {
    for (int i = 0; i < len; i++) {
        arr[i] = arr[i] * 2;
    }
}

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    for (int i = 0; i < 5 ; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;

    changeArr(arr, 5);

    for (int i = 0; i < 5 ; i++) {
        cout << arr[i] << " ";
    }

    int len = sizeof(arr) / sizeof(arr[0]);
    cout << endl << len << endl;
    return 0;
}