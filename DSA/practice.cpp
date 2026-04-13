#include <bits/stdc++.h>
using namespace std;
static bool comp(vector<int> a, vector<int> b)
{
    if (a[0] > b[0])
        return false;
    else if (a[0] == b[0])
    {
        if (a[1] <= b[1])
            return true;
        else
            return false;
    }
    else
        return true;
}
vector<vector<int>> merge(vector<vector<int>> &matrix)
{
    vector<vector<int>> ans;
    sort(matrix.begin(), matrix.end());
    int i = 0;
    while (i < matrix.size())
    {
        vector<int> temp;
        temp.push_back(matrix[i][0]);
        int j = i;
        while (j < matrix.size())
        {
            if (j == matrix.size() - 1)
            {
                temp.push_back(matrix[j][1]);
                i = j + 1;
                break;
            }
            else if(matrix[j][1] >= matrix[j + 1][0])
            {
                if (matrix[j + 1][1] >= matrix[j][1])
                {
                    j++;
                }
                else    
                {   
                    int k = 0;
                    while((j + k < matrix.size() - 1) && (matrix[j][1] > matrix[j + k + 2][0] && matrix[j][1] > matrix[j + k + 2][1]))
                    {
                      k++;
                    }
                    temp.push_back(matrix[j + k ][1]);
                    i = j + 1 + k;
                    break;
            }
        }
            else
            {
                temp.push_back(matrix[j][1]);
                i = j + 1;
                break;
            }
        }
    ans.push_back(temp);
}
    return ans;
}
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
            for (int j = 0; j < 2; j++)
            {
                cin >> matrix[i][j];
            }
        }
        vector<vector<int>> ans = merge(matrix);
        for (int i = 0; i < ans.size(); i++)
        {
            for (int j = 0; j < 2; j++)
            {
                cout << ans[i][j] << " ";
            }
        }
    }
    return 0;
}