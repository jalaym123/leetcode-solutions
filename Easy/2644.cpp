#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxDivScore(vector<int> &nums, vector<int> &divisors)
    {
        int max = 0;
        int temp;
        int ans = INT_MAX;
        for (int i = 0; i < divisors.size(); i++)
        {
            temp = 0;
            for (int j = 0; j < nums.size(); j++)
                if (nums[j] % divisors[i] == 0)
                    temp++;
            if (temp > max)
            {
                max = temp;
                ans = divisors[i];
            }
            else if (temp == max)
            {
                ans = min(ans, divisors[i]);
            }
        }
        return ans;
    }
};
int main()
{
    Solution s;
    vector<int> v1 = {20, 14, 21, 10};
    vector<int> v2 = {5, 7, 5};
    cout << endl
         << s.maxDivScore(v1, v2);
}