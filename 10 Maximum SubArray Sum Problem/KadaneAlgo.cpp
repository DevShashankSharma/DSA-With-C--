#include <iostream>
#include <limits.h>
using namespace std;

int main() {
    int n = 7;
    int arr[] = {3, -4, 5, 4, -1, 7, -8};

    int maxSum = INT_MIN , currSum = 0;

    for ( int i = 0 ; i < n ; i++) {
        currSum += arr[i];
            maxSum = max(currSum , maxSum);
            if (currSum < 0){
                currSum = 0;
            }
    }

    cout << maxSum;

    return 0;
}