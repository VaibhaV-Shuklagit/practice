#include <bits/stdc++.h>
using namespace std;
int BF_Count_Inversion(vector<int> &nums)
{
    int n = nums.size();
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (nums[i] > nums[j])
                cnt++;
        }
    }
    return cnt;
} // TC --> O(N2)
// SC --> O(1)
int Sort_Arrays(vector<int> &nums, int low, int mid, int high)
{
    int left = low;
    int right = mid + 1;
    vector<int> temp;
    int cnt = 0;
    while (left <= mid && right <= high)
    {
        if (nums[left] > nums[right])
        {
            temp.push_back(nums[right]);
            right++;
        }
        else
        {
            temp.push_back(nums[left]);
            left++;
            cnt += (mid - left + 1);
        }
    }
    while (left <= mid)
    {
        temp.push_back(nums[left]);
        left++;
    }
    while (right <= high)
    {
        temp.push_back(nums[right]);
        right++;
    }
    for (int i = 0; i < temp.size(); i++)
    {
        nums[low + i] = temp[i];
    }
    return cnt;
}
int Optimal_Count_Inversion(vector<int> &nums, int low, int high)
{
    int cnt = 0;
    if (low >= high)
        return cnt;
    int mid = (low + high) / 2;
    cnt += Optimal_Count_Inversion(nums, low, mid);
    cnt += Optimal_Count_Inversion(nums, mid + 1, high);
    cnt += Sort_Arrays(nums, low, mid, high);
    return cnt;
}
int numberofinvertionsS(vector<int> &nums, int n)
{
    return Optimal_Count_Inversion(nums, 0, n - 1);
} // TC --> O(NlogN)
// SC --> O(N)
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> nums(n);
        for (int i = 0; i < n; i++)
        {
            cin >> nums[i];
        }
        cout << numberofinvertionsS(nums, n);
    }
}