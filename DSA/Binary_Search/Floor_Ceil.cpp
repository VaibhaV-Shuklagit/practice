// Floor : Largest Number in Array <= x
// Ceil  : Smallest Number in Array >= x // Just Find LowerBound

#include <bits/stdc++.h>
using namespace std;
int Floor_BS(vector<int> nums, int target)
{
    int n = nums.size();
    int low = 0;
    int high = n - 1;
    int ans = -1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (nums[mid] <= target) 
        {
            ans = mid;
            low = mid + 1; 
        }
        else
        {
            high = mid - 1; 
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
        cout << "Floor : " << Floor_BS(nums, target);
    }
}
