#include <bits/stdc++.h>
using namespace std;

int findPeakElement_BF(vector<int> &nums)
{
    int n = nums.size();

    for (int i = 0; i < n; i++)
    {
        bool left = (i == 0) || (nums[i] >= nums[i - 1]);
       
        bool right = (i == n - 1) || (nums[i] >= nums[i + 1]);

        // If both sides are valid, return index
        if (left && right)
            return i;
    }

    // In case no peak found (shouldn't happen)
    return -1;
} // TC --> O(N^2)
// SC --> O(1)

int findPeakElement_Optimal(vector<int> &nums)
{
    // Set left and right bounds
    int low = 0, high = nums.size() - 1;

    // Binary search loop
    while (low < high)
    {
        int mid = (low + high) / 2;

        // If mid element is greater than next
        if (nums[mid] > nums[mid + 1])
        {
            high = mid;
        }
        else
        {
            low = mid + 1;
        }
    }

    // Return peak index
    return low;
} // TC --> O(LogN)
// SC --> O(1)

int main()
{
    vector<int> nums = {1, 3, 20, 4, 1, 0};
    cout << findPeakElement_BF(nums) << "\n";
    cout << findPeakElement_Optimal(nums) << "\n";
    return 0;
}