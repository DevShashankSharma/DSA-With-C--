#include <iostream>
#include <vector>
using namespace std;

int main() {
    // vector<int> vec;
    // cout << vec[0] << endl;

    // vector<int> vec = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    // for (int i = 0; i < vec.size(); i++) {
    //     cout << vec[i] << " ";
    // }

    vector<int> vec(10, 5);  // (size,valueAtEachIndex)
    // for (int i = 0; i < vec.size(); i++) {
    //     cout << vec[i] << " ";
    // }


    // for each loop
    for(int i : vec) {
        cout << i << " ";
    }


    vector<char> vec2 = {'a', 'b', 'c', 'd', 'e'};
    for (char ch : vec2) {
        cout << ch << " ";
    }

    return 0;
}