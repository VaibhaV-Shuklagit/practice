#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> BF_Merge(vector<vector<int>> &matrix)
{
    int n = matrix.size();
    vector<vector<int>> ans;
    sort(matrix.begin(), matrix.end());
    for (int i = 0; i < n; i++)
    {
        int start = matirx[i][0];
        int end = matrix[i][1];
        if (!ans.empty() && ans.back()[1] >= end)
        {
            continue;
        }
        for (int j = i + 1; j < n; j++)
        {
            if (matrix[j][0] <= end)
            {
                ernd = max(end, matrix[j][1]);
            }
            else
                break;
        }
        ans.push_back({start, end});
    }
    return ans;
} // TC --> O(NlogN) + O(2N)
// SC --> O(N)
vector<vector<int>> Optimal_Merge(vector<vector<int>> &matrix)
{
    int n = matrix.size();
    vector<vector<int>> ans;
    sort(matrix.begin(), matrix.end());
    for (int i = 0; i < n; i++)
    {
        if (ans.empty() || matrix[i][0] > ans.back()[1])
        {
            ans.push_back(matrix[i]);
        }
        else
        {
            ans.back()[1] = max(ans.back()[1], matrix[i][1]);
        }
    }
    return ans;
} // TC --> O(NLogN) + O(N)
// SC --> O(N)
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<vector<int>> matrix(n, vector<int>(2));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < 2; j++) // TEST CASE : {{1,3},{2,6},{8,9},{9,11},{8,10},{2,4},{15,18},{16,17}}
            {
                cin >> matrix[i][j];
            }
        }
        vector<vector<int>> ans = BF_Merge(matrix);
        for (int i = 0; i < ans.size(); i++) // OUTPUT : {{1,6},{8,11},{15,18}}
        {
            for (int j = 0; j < 2; j++)
            {
                cout << ans[i][j] << " ";
            }
        }
    }
    return 0;
}