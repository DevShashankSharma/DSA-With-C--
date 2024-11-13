#include <iostream>
using namespace std;
#include <vector>

// Time Complexity : O(n^2)
vector<int> pairSum1(vector<int> arr, int target) {
    vector<int> ans;
    int n = arr.size();

    for(int i=0 ; i<n-1 ; i++) {
        for(int j=i+1 ; j<n ; j++) {
            if(arr[i] + arr[j] == target) {
                ans.push_back(i);
                ans.push_back(j);
            }
        }    
    }

    return ans;
}


//! Optimized Solution time complexity : O(n)
vector<int> pairSum(vector<int> arr, int target) {
    vector<int> ans;
    int n = arr.size();
    int i = 0 , j = n-1;

    while(i < j) {
        if(arr[i] + arr[j] == target) {
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        } else if(arr[i] + arr[j] < target) {
            i++;    
        } else {
            j--;    
        }
    }

    return ans;
}

int main() {
    vector<int> nums = {2, 7, 11, 15};
    int target = 26;

    vector<int> ans = pairSum(nums, target);

    cout<<"["<<ans[0]<<" , "<<ans[1]<<"]";

    return 0;
}