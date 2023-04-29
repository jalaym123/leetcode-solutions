#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = 1;
        int a = 0;
        int b = 0;
        for (int i = 0; i<nums.size();i++) {
            for (int j = i+1;j<nums.size();j++) {
                n++;
                if(nums[i]+nums[j] == target)
                    {
                        a = i;
                        b = j;
                    }
            }
        }
        return {a, b};
    }
};