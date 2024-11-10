#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec;

    cout << vec.size() << endl;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);
    cout << vec.size() << endl;

    vec.pop_back();
    cout << vec.size() << endl;

    cout << vec.front() << endl;
    cout << vec.back() << endl;
    cout << vec.at(2) << endl;

    return 0;
}