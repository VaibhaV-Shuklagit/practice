#include <bits/stdc++.h>
using namespace std;

int findMedian_BF(vector<vector<int>> &matrix)
{

    vector<int> elements;

    for (auto &row : matrix)
    {

        for (int val : row)
        {
            elements.push_back(val);
        }
    }

    sort(elements.begin(), elements.end());

    int n = elements.size();
    return elements[n / 2];
} // TC --> O(M*N*(log(M*N)))
// SC --> O(M*N)

int countLessEqual(vector<int> &row, int mid)
{
    return upper_bound(row.begin(), row.end(), mid) - row.begin();
}

int findMedian_Optimal(vector<vector<int>> &matrix)
{
    int rows = matrix.size();
    int cols = matrix[0].size();

    int low = matrix[0][0];
    int high = matrix[0][cols - 1];
    for (int i = 1; i < rows; i++)
    {
        low = min(low, matrix[i][0]);
        high = max(high, matrix[i][cols - 1]);
    }

    // Binary search over the value range
    while (low < high)
    {
        int mid = (low + high) / 2;

        // Count elements ≤ mid
        int count = 0;
        for (int i = 0; i < rows; i++)
        {
            count += countLessEqual(matrix[i], mid);
        }

        // If count is less than half, median is greater
        if (count < (rows * cols + 1) / 2)
            low = mid + 1;
        else
            high = mid;
    }

    // Final low is the median
    return low;
} // TC --> O(N × log(max - min) × log(M))
// SC --> O(1)

int main()
{

    vector<vector<int>> matrix = {
        {1, 3, 5},
        {2, 6, 9},
        {3, 6, 9}};

    cout << findMedian_BF(matrix) << "\n";
    cout << findMedian_BF(matrix) << "\n";
    return 0;
}
