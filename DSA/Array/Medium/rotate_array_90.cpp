#include<bits/stdc++.h>
using namespace std;
void rotate(vector<vector<int>>& arr)
    {
    int row = arr.size();
    int column = arr[0].size();
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < column; j++)
        {
            if(i <= j)
            {
                swap(arr[i][j],arr[j][i]);
            }
        }
    }  
    for(int i = 0; i < column/2; i++)
    {
        for(int j = 0; j < row; j++)
        {
            swap(arr[j][i],arr[j][column - i - 1]);
        }
    }  
    }
    int main()
    {
        int t;
        cout << "Enter the Number of Test Cases : ";
        cin >> t;
        while(t--)
        {
        int n;
        cout << "Enter the No. of rows : ";
        cin >> n;
        int m;
        cout << "Enter the No. of Columns : ";
        cin >> m;
        vector<vector<int>> matrix(n, vector<int>(m));
        cout << "Enter the Elements in the Array : ";
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> matrix[i][j];
            }
        }
        cout << endl;
        rotate(matrix);
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cout << matrix[i][j] << " ";
            }
            cout << endl;
        }
        cout << endl;
        }
    }