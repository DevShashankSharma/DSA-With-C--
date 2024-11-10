#include <iostream>
#include <vector>
using namespace std;

bool linearSearch(vector<int> vec, int key) {
    for (int val : vec) {
        if (val == key) {
            return true;
        }
    }
    return false;
}

void reverse(vector<int> &vec) {
    int start = 0;
    int end = vec.size() - 1;
    while (start < end) {
        swap(vec[start], vec[end]);
        start++;
        end--;
    }
}

void printVector(vector<int> vec) {
    for (int val : vec) {
        cout << val << " ";
    }
    cout << endl;
}
int main() {
    vector<int> vec = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    linearSearch(vec, 53) ? cout << "Found" : cout << "Not Found";
    cout << endl;

    printVector(vec);
    reverse(vec);
    printVector(vec);

    return 0;
}