#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

//! Brute Force Time Complexity : O(n^2)
int majorityElement1(vector<int>& nums) {
    for(int val : nums) {
        int freq = 0;
        for (int vl : nums) {
            if (val == vl) {
                freq++;
            }
        }
        if (freq > nums.size() / 2) {
            return val;
        }
    }
    return -1;
}

//! Better Time Complexity : O(nlogn)   [sorting + linear search]
int majorityElement2(vector<int>& nums) {
    int n = nums.size();
    sort(nums.begin(), nums.end());
    
    int freq = 1 , ans = nums[0];
    for(int i=1 ; i<nums.size() ; i++) {
        if(nums[i] == ans) {
            freq++;
        } else {
            freq = 1;
            ans = nums[i];
        }

        if(freq > n / 2) {
            return ans;
        }
    }
    return ans;
}

//! Optimal Time Complexity : O(n)  -----> Using Moore's Voting Algorithm
int majorityElement(vector<int>& nums) {
    int n = nums.size();
    int count = 0 , ans = -1;
    for(int i=0 ; i<nums.size() ; i++) {
        if(count == 0) {
            ans = nums[i];
            // count = 1;
        } else if (nums[i] == ans) {
            count++;
        } else {
            count--;
        }
    }
    return ans;
}
int main() {
    vector<int> nums = {2, 2, 1, 1, 1, 2, 2};
    
    cout << majorityElement(nums) << endl;

    return 0;
}
