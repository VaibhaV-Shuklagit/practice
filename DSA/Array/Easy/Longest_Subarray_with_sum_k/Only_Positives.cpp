#include <bits/stdc++.h>
using namespace std;
int BF_Sub(vector<int> &arr, int k)
{
    int sub = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        int sum = 0;
        int cnt = 0;
        for (int j = i; j < arr.size(); j++)
        {
            sum = sum + arr[j];
            cnt++;
            if (sum == k)
            {
                sub = max(cnt, sub);
            }
        }
    }
    return sub;
}
int Better_Sub(vector<int> &arr, int k)
{
    int preSum = 0;
    int len = 0;
    unordered_map<int, int> hash;
    for (int i = 0; i < arr.size(); i++)
    {
        preSum += arr[i];
        if (preSum == k)
        {
            len = max(len, i + 1);
        }

        int rem = preSum - k;
        if (hash.find(rem) != hash.end())
        {
            len = max(len, i - hash[rem]);
        }
        hash[preSum] = i;
    }
    return len;
}
int Optimal_Sub(vector<int> &arr, int k)
{
    int left = 0, right = 0;
    long long sum = a[0];
    int maxLen = 0;
    int n = arr.size();
    while (right < n)
    {
        while (left <= right && sum > k)
        {
            sum -= arr[left];
            left++;
        }
        if (sum == k)
        {
            maxLen = max(maxLen, right - left + 1);
        }
        right++;
        if (right < n)
            sum += arr[right];
    }
    return maxLen;
} // TC --> O(2N)
// SC --> O(1)
// Two Pointers
int main()
{
    int t;
    cout << "Test Cases: ";
    cin >> t;
    while (t--)
    {
        int n;
        cout << "Enter the No. of Elements : ";
        cin >> n;
        vector<int> arr(n);
        cout << "Enter the Elements in the Array : ";
        for (int j = 0; j < n; j++)
        {
            cin >> arr[j];
        }
        int k;
        cout << "Target : ";
        cin >> k;
        cout << "The Length of the Longest Subarray with the Sum of K is " << BF_Sub(arr, k) << endl;
        cout << "The Length of the Longest Subarray with the Sum of K is " << Better_Sub(arr, k) << endl;
        cout << "The Length of the Longest Subarray with the Sum of K is " << Optimal_Sub(arr, k) << endl;
    }
    return 0;
}