#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void rotate(vector<vector<int>> &matrix)
    {
        for (int i = 0; i < matrix.size() / 2; i++)
        {
            matrix[i].swap(matrix[matrix.size() - 1 - i]);
        }
        for (int i = 0; i < matrix.size(); i++)
        {
            for (int j = i + 1; j < matrix.size(); j++)
            {
                matrix[i][j] = matrix[i][j] ^ matrix[j][i];
                matrix[j][i] = matrix[i][j] ^ matrix[j][i];
                matrix[i][j] = matrix[i][j] ^ matrix[j][i];
            }
        }
    }
};

int main()
{
    vector<vector<int>> v = {
        {1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    Solution s;
    s.rotate(v);
}