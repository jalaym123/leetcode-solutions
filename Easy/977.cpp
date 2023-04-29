#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> v;
        for(auto it: nums) {
            v.push_back(pow(it, 2));
        }
        sort(v.begin(), v.end());
        return v;
    }
};