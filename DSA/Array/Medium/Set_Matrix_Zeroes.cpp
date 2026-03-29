#include <bits/stdc++.h>
using namespace std;
void BF_Set_Matrix_Zeroes(vector<vector<int>> &matrix)
{
    int row = matrix.size();
    int column = matrix[0].size();
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            if (matrix[i][j] == 0)
            {
                for (int k = 0; k < column; k++)
                {
                    if (matrix[i][k] != 0)
                    {
                        matrix[i][k] = -1;
                    }
                }
                for (int l = 0; l < row; l++)
                {
                    if (matrix[l][j] != 0)
                    {
                        matrix[l][j] = -1;
                    }
                }
            }
        }
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < column; j++)
            {
                if (matrix[i][j] == -1)
                    matrix[i][j] = 0;
            }
        }
    }
} // TC --> O(N3) [Approx]

void Better_Set_Matrix_Zeroes(vector<vector<int>> &matrix)
{
    int row = matrix.size();
    int column = matrix[0].size();
    vector<int> rows(row,0);
    vector<int> cols(column,0);
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)    
        {
            if (matrix[i][j] == 0)
            {
                rows[i] = 1;
                cols[j] = 1;
            }
        }
    }
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < column; j++)
            {
                if (rows[i] == 1 || cols[j] )
                {
                    matrix[i][j] = 0;
                }
            }
        }
} // TC --> O(2*N2) [APPROX]
// SC --> O(N) + O(M)
void Better_Set_Matrix_Zeroes(vector<vector<int>> &matrix)
{
    int row = matrix.size();
    int column = matrix[0].size();
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)    
        {
            if (matrix[i][j] == 0)
            {
                rows[i] = 1;
                cols[j] = 1;
            }
        }
    }
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < column; j++)
            {
                if (rows[i] == 1 || cols[j] )
                {
                    matrix[i][j] = 0;
                }
            }
        }
}
int main()
{
    int t;
    cout << "Test Cases: ";
    cin >> t;
    while (t--)
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
        BF_Set_Matrix_Zeroes(matrix);
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cout << matrix[i][j] << " ";
            }
            cout << endl;
        }
        cout << endl;
        Better_Set_Matrix_Zeroes(matrix);
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