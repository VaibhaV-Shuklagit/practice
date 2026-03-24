#include <bits/stdc++.h>
using namespace std;
int BF_Maximum_SubArray(vector<int> arr)
{
    int maxi = INT_MIN;
    for (i = 0; i < arr.size(); i++)
    {
        sum = 0;
        for (j = i; j < arr.size(); j++)
        {
            sum += arr[j];
        }
        maxi = max(sum, maxi);
    }
    return maxi;
} // TC --> O(N2) In most cases it will reach TLE
int Optimal_Maximum_SubArray(vector<int> arr)
{
    int maxi = INT_MIN;
    int sum = 0;
    int start;
    int ansStart = -1;
    int ansEnd = -1;
    for (int i = 0; i < arr.size(); i++)
    {
        if (sum == 0)
            start = i;
        sum += arr[i];
        if (sum > maxi)
        {
            maxi = sum;
            ansStart = start, ansEnd = i; // followup Question to get Length also
        }
        if (sum < 0)
        {
            sum = 0;
        }
    }
    return maxi;
} // Kadane's Algorithm
// TC --> O(N)
// Just think like this that we add to get maximum sum(i.e positive)
// which means if we get our sum negative so its better to initialize it to zero
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
        cout << "Maximum Sum of Any SubArray : " << BF_Maximum_SubArray(nums) << endl;
        cout << "Maximum Sum of Any SubArray : " << Optimal_Maximum_SubArray(nums) << endl;
    }
}