#include <bits/stdc++.h>
using namespace std;

bool searchMatrix_BF(vector<vector<int>> &matrix, int target)
{
    int n = matrix.size();

    int m = matrix[0].size();

    for (int i = 0; i < n; i++)
    {
    
        for (int j = 0; j < m; j++)
        {
            if (matrix[i][j] == target)
                return true;
        }
    }

    return false;
} // TC --> O(N*M)
// SC --> O(1)

bool binarySearch(vector<int> &nums, int target)
{
    int n = nums.size();

    int low = 0, high = n - 1;

    while (low <= high)
    {

        int mid = (low + high) / 2;

        if (nums[mid] == target)
            return true;

        else if (target > nums[mid])
            low = mid + 1;

        else
            high = mid - 1;
    }

    return false;
}

bool searchMatrix_Better(vector<vector<int>> &matrix, int target)
{

    int n = matrix.size();

    int m = matrix[0].size();

    for (int i = 0; i < n; i++)
    {

        if (matrix[i][0] <= target && target <= matrix[i][m - 1])
        {
        
            return binarySearch(matrix[i], target);
        }
    }
    
    return false;
} // TC --> O(N*LogM)
// SC --> O(1)

bool searchMatrix_Optimal(vector<vector<int>> &matrix, int target)
{
    int n = matrix.size();

    int m = matrix[0].size();

    int low = 0, high = n * m - 1;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        int row = mid / m;
        int col = mid % m;

        if (matrix[row][col] == target)
            return true;

        else if (matrix[row][col] < target)
            low = mid + 1;

        else
            high = mid - 1;
    }

    return false;
} // TC --> O(LogN*M)
// SC --> O(1)

int main()
{
    vector<vector<int>> matrix = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}};

    if (obj.searchMatrix(matrix, 8))
        cout << "true\n";
    else
        cout << "false\n";

    return 0;
}