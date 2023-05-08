#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int diagonalSum(vector<vector<int>> &mat)
    {
        int sum = 0;
        for (int i = 0; i < mat.size(); i++)
        {
            if (i == mat.size() - i - 1)
            {
                sum += mat[i][i];
            }
            else
            {
                sum += mat[i][i];
                sum += mat[i][mat.size() - i - 1];
            }
        }
        return sum;
    }
};

int main()
{
    Solution s;
    vector<vector<int>> v = {
        {7, 3, 1, 9},
        {3, 4, 6, 9},
        {6, 9, 6, 6},
        {9, 5, 8, 5}};
    s.diagonalSum(v);
}