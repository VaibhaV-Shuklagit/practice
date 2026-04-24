#include <bits/stdc++.h>
using namespace std;
vector<int> MyAns_First_Last(vector<int> nums, int target)
{
    int n = nums.size();
    int first = -1;
    if (n == 0)
        return {first, first};
    int low = 0;
    int high = n - 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (nums[mid] == target)
        {
            first = mid;
            break;
        }
        else if (nums[mid] > target)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    int p = first;
    while (p > 0 && (nums[p - 1] == target))
    {
        p--;
    }
    int q = first;
    while ((q < n - 1) && (nums[q + 1] == target))
    {
        q++;
    }
    return {p, q};
} // TC --> O(LogN) + O(N) [Avg]
vector<int> Optimal_First_Last(vector<int> nums, int target)
{
    int n = nums.size();
    int first = -1;
    int last = -1;
    if (n == 0)
        return {first, first};
    int low = 0;
    int high = n - 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (nums[mid] <= target)
        {
            if (nums[mid] == target)
            {
                last = mid;
            }
            low = mid + 1;
        }
        else if (nums[mid] > target)
        {
            high = mid - 1;
        }
    }
    low = 0;
    high = n - 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (nums[mid] >= target)
        {
            if (nums[mid] == target)
            {
                first = mid;
            }
            high = mid - 1;
        }
        else if (nums[mid] < target)
        {
            low = mid + 1;
        }
    }
    return {first, last};
} // TC --> O(LogN)
vector<int> LB_UB_Method(vector<int> vector<int> nums, int target)
{
    int n = nums.size();
    if (n == 0)
        return {-1, -1};
    int LB = lower_bound(nums.begin(), nums.end(), target) - nums.begin();
    int UB = upper_bound(nums.begin(), nums.end(), target) - nums.begin();
    if (LB == n || nums[LB] != target)
        return {-1, -1};
    return {LB, UB - 1};
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
        vector<int> ans = MyAns_First_Last(nums, target);
        for (int i = 0; i < ans.size(); i++)
        {
            cout << ans[i] << " ";
        }
    }
}