#include <bits/stdc++.h>
using namespace std;

// Function to find the index of the row
// with the maximum element in a given column
int maxElement(vector<vector<int>> &arr, int col)
{
    int n = arr.size();
    int max_val = INT_MIN;
    int index = -1;

    // Iterate through each row to find the maximum element
    // in the particular column
    for (int i = 0; i < n; i++)
    {
        if (arr[i][col] > max_val)
        {
            max_val = arr[i][col];
            index = i;
        }
    }
    return index;
}

vector<int> findPeakGrid(vector<vector<int>> &arr)
{
    int n = arr.size();
    int m = arr[0].size();

    // Initialize the lower and upper bounds for binary search
    int low = 0;
    int high = m - 1;

    // Perform binary search on columns
    while (low <= high)
    {
        int mid = (low + high) / 2;

        // Find the index of the row with the maximum element
        // in the middle column
        int row = maxElement(arr, mid);

        int left = mid - 1 >= 0 ? arr[row][mid - 1] : INT_MIN;
        int right = mid + 1 < m ? arr[row][mid + 1] : INT_MIN;

        if (arr[row][mid] > left && arr[row][mid] > right)
        {
            return {row, mid};
        }
        else if (left > arr[row][mid])
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    return {-1, -1};
}

int main()
{

    vector<vector<int>> mat = {
        {4, 2, 5, 1, 4, 5},
        {2, 9, 3, 2, 3, 2},
        {1, 7, 6, 0, 1, 3},
        {3, 6, 2, 3, 7, 2}};


    vector<int> peak = findPeakGrid(mat);
    cout << peak[0] << " " << peak[1] << endl;

    return 0;
}