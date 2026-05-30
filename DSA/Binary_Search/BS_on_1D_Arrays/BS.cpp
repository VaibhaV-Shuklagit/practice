#include <bits/stdc++.h>
using namespace std;
int Iteravtive_BS(vector<int> nums, int low, int high, int target)
{
    while (low <= high)
    {
        int mid = low + (high - low) / 2; // To prevent Int Overflow
        if (nums[mid] == target)
            return mid;
        else if (target > nums[mid])
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}
int Recursive_BS(vector<int> nums, int low, int high, int target)
{
    if (low > high)
        return -1;
    int mid = low + (high - low) / 2;
    if (nums[mid] == target)
        return mid;
    else if (target > nums[mid])
        return Recursive_BS(nums, mid + 1, high, target);
    else
        return Recursive_BS(nums, mid + 1, high, target);
} // TC --> O(Log2N) 
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> nums(n);
        for (int i = 0; i < n; i++) // Test Case : 1) 3 4 6 7 9 12 16 17 , 2) 5
        {
            cin >> nums[i];
        }
        int target;  
        cin >> target;
        cout << Iteravtive_BS(nums, 0, n - 1, target) << " " << Recursive_BS(nums, 0, n - 1, target) << endl;
    }
}