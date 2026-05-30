// LEETCODE 33

#include <bits/stdc++.h>
using namespace std;
int Optimal_Search(vector<int> &nums, int target)
{
    int low = 0, high = nums.size() - 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (nums[mid] == target)
            return mid;

        if (nums[low] <= nums[mid])
        {
            if (target >= nums[low] && target <= nums[mid])
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        else
        {
            if (target >= nums[mid] && target <= nums[high])
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
    }
    return -1;
} // TC --> O(LogN)

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> nums(n);
        for(int i = 0; i < n; i++)
        {
            cin >> nums[i];
        }
        int target;
        cin >> target;
        cout << Optimal_Search << endl;
    }
    return 0;
}
// Some Test Cases :
// [1,3] target = 1,0,3
// [4,5,6,7,0,1,2] = 1,0,3