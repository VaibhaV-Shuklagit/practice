#include <bits/stdc++.h>
using namespace std;
int BF_Longest_Sequence(vector<int> arr)
{
    int longest = 1;
    for (int i = 0; i < arr.size(); i++) // TC --> O(N)
    {
        int x = arr[i];
        int cnt = 1;
        for (int j = 0; j < arr.size(); j++) // TC --> O(N)
        {
            if (arr[j] == x + 1) // Linear Search (TC --> O(N))
            {
                x = x + 1;
                cnt++;
                j = 0;
            }
        }
        longest = max(cnt, longest);
    }
    return longest;
} // TC --> O(N3)
int Better_Longest_Sequence(vector<int> arr)
{
    sort(arr.begin(), arr.end());
    int n = nums.size();
    int lastSmaller = INT_MIN;
    int cnt = 0;
    int longest = 1;
    for (int i = 0; i < n; i++)
    {
        if (nums[i] - i == lastSmaller)
        {
            cn += 1;
            lastSmaller = nums[i];
        }
        else if (lastSmaller != nums[i])
        {
            cnt = 1;
            lastSmaller = nums[i];
        }
        longest = max(longest, cnt);
    }
    return longest;
} // TC --> O(NLogN) + O(N)
// SC --> O(N) [ SORTING ]
int Optimal_Longest_Sequence(vector<int> arr)
{
    
}
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
        cout << "Longest Consecutive Sequence in the Array is : " << BF_Longest_Sequence(nums) << endl;
        // cout << "Longest Consecutive Sequence in the Array is : " << Better_Longest_Sequence(nums) << endl;
        // cout << "Longest Consecutive Sequence in the Array is : " << Optimal_Longest_Sequence(nums) << endl;
    }
}