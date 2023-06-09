#include <bits/stdc++.h>
using namespace std;

#include <limits.h>
class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int min = INT_MAX;
        int max = 0;
        int day;
        for (int i = 0; i < prices.size(); i++)
        {
            if (prices[i] < min)
                min = prices[i];
            if (prices[i] - min > max)
                max = prices[i] - min;
        }
        return max;
    }
};