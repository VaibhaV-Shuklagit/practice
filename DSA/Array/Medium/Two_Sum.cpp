#include <bits/stdc++.h>
using namespace std;
vector<int> BF_Two_Sum(vector<int> arr, int k)
{
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == k)
            {
                return {i, j};
            }
        }
    }
    return {-1, -1};
} // TC -->  O(N2)
vector<int> Better_Two_Sum(vector<int> arr, int k)
{
    map<int, int> mpp;
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        int num = nums[i];
        int moreNeeded = k - num;
        if (mpp.find(moreNeeded) != mpp.end())
        {
            return (mpp[moreNeeded], i);
        }
        mpp[num] = i;
    }
    return {-1, -1};
} // TC --> O(NlogN) [in case of ordered map] && O(N) or O(N2) [in case of Unordered Map]
// SC --> O(N)
vector<int> Optimal_Two_Sum(vector<int> arr, int k)
{
    int left = 0;
    right = n - 1;
    sort(arr.begin(), arr.end());
    while (left < right)
    {
        int sum = arr[left] + arr[right];
        if (sum == k)
        {
            return {left, right};
        }
        else if (sum < k)
            left++;
        else
            right--;
    }
    return {-1, -1};
} // Best for the Sorted array
// SC --> O(N) if the Array is Sorted by any algo
int main()
{
    int t;
    cout << "Test Cases: ";
    cin >> t;
    while (t--)
    {
        int n;
        cout << "Enter the No. of Elements in the Array : ";
        cin >> n;
        vector<int> nums(n);
        cout << "Enter the Elements in the Array : ";
        for (int j = 0; j < n; j++)
        {
            cin >> nums[j];
        }
        int k;
        cout << "Number to be Found : ";
        cin >> k;
        cout << "Indexes are (Brute Force): ";
        for (auto it : BF_Two_Sum(nums, k))
            cout << it << " ";
        cout << "Indexes are (Better): ";
        for (int auto it : Better_Two_Sum(nums, k))
            it << " " << endl;
        cout << "Indexes are (Optimal): ";
        for (int auto it : Optimal_Two_Sum(nums, k))
            it << " " << endl;
    }
}