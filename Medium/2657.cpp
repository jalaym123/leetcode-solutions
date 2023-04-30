#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> findThePrefixCommonArray(vector<int> &A, vector<int> &B)
    {
        vector<int> v1;
        int c;
        for (int i = 0; i < A.size(); i++)
        {
            c = 0;
            vector<int> v(A.begin(), A.begin() + i + 1);
            v.insert(v.end(), B.begin(), B.begin() + i + 1);
            sort(v.begin(), v.end());
            for (int k = 0; k < v.size() - 1; k++)
            {
                if (v[k] == v[k + 1])
                {
                    c++;
                    k++;
                }
            }
            v1.push_back(c);
        }
        return v1;
    }
};

int main()
{
    Solution s;
    vector<int> v1 = {1, 2, 3};
    vector<int> v2 = {2, 3, 1};
    v1 = s.findThePrefixCommonArray(v1, v2);
    for (auto it : v1)
    {
        cout << it << " ";
    }
}