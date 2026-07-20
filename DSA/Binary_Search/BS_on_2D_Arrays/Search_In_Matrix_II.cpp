#include <bits/stdc++.h>
using namespace std;

bool searchElement_BF(vector<vector<int>> matrix, int target)
{
    int n = matrix.size();
    int m = matrix[0].size();

    // Loop through each row
    for (int i = 0; i < n; i++)
    {
        // Loop through each column in the current row
        for (int j = 0; j < m; j++)
        {
            
            if (matrix[i][j] == target)
            {
                return true;
            }
        }
    }
    return false;
} // TC --< O(N*M)
// SC --> O(1)

bool binarySearch(vector<int> &nums, int target)
{
    int n = nums.size();
    int low = 0, high = n - 1;

    while (low <= high)
    {
        int mid = (low + high) / 2; 

        if (nums[mid] == target)
        {
            return true; 
        }
        else if (target > nums[mid])
        {
            low = mid + 1; 
        }
        else
        {
            high = mid - 1; 
        }
    }
    return false; 
}

bool searchElement(int target)
{
    int n = matrix.size(); 

    // Loop through each row and apply binary search
    for (int i = 0; i < n; i++)
    {
        if (binarySearch(matrix[i], target))
        {
            return true; 
        }
    }
    return false; 
} // TC --> O(N*logM)
// SC --> O(1)

bool searchElement_Optimal(int target)
{
    int n = matrix.size();    
    int m = matrix[0].size(); 

    int row = 0;     // Start from first row
    int col = m - 1; // Start from last column (top-right corner)

    while (row < n && col >= 0)
    {
        if (matrix[row][col] == target)
        {
            return true; // Found target
        }
        else if (matrix[row][col] < target)
        {
            row++; // Move down to next row
        }
        else
        {
            col--; // Move left to previous column
        }
    }

    return false; 
} // TC --> O(N+M)
// SC --> O(1)

int main()
{
    vector<vector<int>> matrix = {
        {1, 4, 7, 11, 15},
        {2, 5, 8, 12, 19},
        {3, 6, 9, 16, 22},
        {10, 13, 14, 17, 24},
        {18, 21, 23, 26, 30}};

    bool found = searchElement_BF(matrix, 8);

    cout << (found ? "true\n" : "false\n");

    return 0;
}