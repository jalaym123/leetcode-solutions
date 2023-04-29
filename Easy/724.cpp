#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int pivotIndex(vector<int> &nums)
    {
        int rsum = 0, lsum = 0, mid = nums.size() / 2;
        for (int i = 0; i < nums.size(); i++)
        {
            lsum = accumulate(nums.begin(), nums.begin() + i, 0);
            rsum = accumulate(nums.begin() + i + 1, nums.end(), 0);
            if (lsum == rsum)
                return i;
        }
        return -1;
    }
};