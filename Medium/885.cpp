#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<int>> spiralMatrixIII(int rows, int cols, int rStart, int cStart)
    {
        int total = rows * cols;
        int c = 0;
        vector<vector<int>> ans;
        int l = cStart - 1;
        int u = rStart;
        int r = cStart + 1;
        int d = rStart + 1;
        while (c < total)
        {
            for (int i = l + 1; i <= r && c < total; i++)
            {
                if (u < rows && i < cols)
                {
                    cout << "1 - " << u << " " << i << endl;
                    ans.push_back({u, i});
                    c++;
                }
            }
            u--;
            for (int i = u + 2; i <= d && c < total; i++)
            {
                if (i < rows && r < cols)
                {
                    cout << "2 - " << i << " " << r << endl;
                    ans.push_back({i, r});
                    c++;
                }
            }
            r++;
            for (int i = r - 2; i >= l && c < total; i--)
            {
                if (d < rows && i < cols)
                {
                    cout << "3 - " << d << " " << i << endl;
                    ans.push_back({d, i});
                    c++;
                }
            }
            d++;
            for (int i = d - 2; i >= u && c < total; i--)
            {
                cout << i << "<" << rows << " " << l << "<" << cols << endl;
                if (i < rows && l < cols)
                {
                    cout << "4 - " << i << " " << l << endl;
                    ans.push_back({i, l});
                    c++;
                }
            }
            l--;
        }
        return ans;
    }
};

int main()
{
    Solution s;
    vector<vector<int>> v = s.spiralMatrixIII(1, 4, 0, 0);
}