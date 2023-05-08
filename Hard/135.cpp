#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int candy(vector<int> &ratings)
    {
        vector<int> l(ratings.size(), 1);
        int sum;
        for (int i = 1; i < ratings.size(); ++i)
            if (ratings[i] > ratings[i - 1])
                l[i] = l[i - 1] + 1;

        sum = l.back();
        for (int i = ratings.size() - 2; i >= 0; --i)
        {
            if (ratings[i] > ratings[i + 1])
                l[i] = max(l[i + 1] + 1, l[i]);
            sum += l[i];
        }
        for (auto it : ratings)
        {
            cout << it << " ";
        }
        cout << endl;
        for (auto it : l)
        {
            cout << it << " ";
        }
        cout << endl;
        return sum;
    }
};

int main()
{
    Solution s;
    vector<int> ratings = {2, 7,8,9,0,6,1,4,9,1,5,2,3,1};
    cout << s.candy(ratings);
}