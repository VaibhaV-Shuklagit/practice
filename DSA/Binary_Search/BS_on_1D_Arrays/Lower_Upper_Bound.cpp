// Lower Bound : Smallest Index Such that nums[ind] >= target
// Upper Bound : Smallest Index Such that nums[ind] > target


#include <bits/stdc++.h>
using namespace std;
int MyAns_Lower_Bound(vector<int> nums, int target)
{
    int result = -1;
    int low = 0;
    int high = nums.size() - 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (nums[mid] == target)
        {
            result = mid;
            break;
        }
        else if (nums[mid] > target)
        {
            high = mid - 1;
        }
        else
            low = mid + 1;
    }
    if (result == -1)
        return low;
    else
    {
        while (nums[result] >= target)
        {
            result--;
        }
        return result + 1;
    }
}
int MyAns_Upper_Bound(vector<int> &nums, int target)
{
    int result = -1;
    int low = 0;
    int high = nums.size() - 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (nums[mid] == target)
        {
            result = mid;
            break;
        }
        else if (nums[mid] > target)
        {
            high = mid - 1;
        }
        else
            low = mid + 1;
    }
    if (result == -1)
        return low;
    else
    {
        while (nums[result] <= target)
        {
            result++;
        }
        return result;
    }
}
int Lower_Bound(vector<int> nums, int target)
{
    int n = nums.size();
    int low = 0;
    int high = n - 1;
    int ans = n;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (nums[mid] >= target) // In order to Find UB just remove equals to sign
        {
            ans = mid;
            high = mid - 1; // look for more smaller Index on left
        }
        else
        {
            low = mid + 1; // look for right
        }
    }
    return ans;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> nums(n);
        int target;
        cin >> target;
        for (int i = 0; i < n; i++)
        {
            cin >> nums[i];
        }
        int lb = lower_bound(nums.begin(), nums.end(), target) - nums.begin(); // Inbuilt Function to Find LowerBound
        int ub = upper_bound(nums.begin(), nums.end(), target) - nums.begin(); // Inbuilt Function to Find UpperBound
        // we are subtracting because these functions will return an iterator value and we need to find the Index in Int value
        cout << "LowerBound : " << lower_bound(nums, target);
    }
}
