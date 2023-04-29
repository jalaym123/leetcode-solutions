#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int passThePillow(int n, int time)
    {
        int ans = 1;
        int toIncrease = 1;
        int x = time < n ? time : time - 1;
        for (int i = 1; i <= time; i++)
        {
            if (toIncrease)
                ans++;
            else
                ans--;
            if (ans == n)
                toIncrease = 0;
            else if (ans == 1)
                toIncrease = 1;
        }
        return ans;
    }
};