#include <bits/stdc++.h>
using namespace std;
void setZeroes(vector<vector<int>> &matrix)
{
    int row = matrix.size();
    int column = matrix[0].size();
    map<int,pair<int,int> hash;
    int num = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            if (matrix[i][j] == 0)
            {
                hash[++num] = {i,j};
            }
        }
    }
    for (auto it : hash)
    {
        int k = 0;
        while (k < row)
        {
            matrix[k][it.second.second] = 0;
        }
    }
    for (auto it2 : hash)
    {
        int k = 0;
        while (k < column)
        {
            matrix[it2.second.first][k] = 0;
        }
    }
}
int main()
{
    int t;
    cout << "Enter the No. of Test Cases : ";
    cin >> t;
    while (t--)
    {
        int row;
        cout << "Enter the Number of Rows : ";
        cin >> row;
        int column;
        cout << "Enter the Numebr of Columns : ";
        cin >> column;
        vector<vector<int>> matrix(row, vector<int>(column));
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < column; j++)
            {
                cin >> matrix[i][j];
            }
        }
        setZeroes(matrix);
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < column; j++)
            {
                cout << matrix[i][j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}