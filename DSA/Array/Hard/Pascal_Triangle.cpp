#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> Generate_Row(int row)
{
    long long ans = 1;
    vector<int> ansRow;
    ansRow.push_back(1);
    for (int col = 1; col < row; col++)
    {
        ans = ans * (row - col);
        ans = ans / col;
        ansRow.push_back(ans);
    }
    return ansRow;
}
vector<vector<int>> pascalTriangle(int N)
{
    vector<vector<int>> ans;
    for (int i = 1; i <= N; i++)
    {
        ans.pus_back(generatedRoww(i));
    }
    return ans;
} // TC --> O(N2)
// Most Optimal Way to Print Whole Pascal's Triangle
vector<vector<int>> My_Approach(int numRows)
{
    vector<vector<int>> ans;
    ans.push_back({1});
    for (int i = 2; i <= numRows; i++)
    {
        vector<int> ans1;
        ans1.push_back(1);
        for (int j = 0; j < ans[i - 2].size() - 1; j++)
        {
            ans1.push_back(ans[i - 2][j] + ans[i - 2][j + 1]);
        }
        ans1.push_back(1);
        ans.push_back(ans1);
    }
    return ans;
} // My approach which i used to solve this problem in leetcode
// Here I used the Fact that a element in the Pascal's Triangle is the Sum of Two Consecutive Elements placed at the above row
int main()
{
    int t;
    cout << "Enter the Test Cases : ";
    cin >> t;
    while(t--)
    {
        int N;
        cout << "Enter the Number of Rows : ";
        cin >> N;
    }
}