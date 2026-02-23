#include <bits/stdc++.h>
using namespace std;
int Most_optimal_Sub(vector<int> &arr, int k)
{
    int preSum = 0;
    int len = 0;
    unordered_map<int, int> hash;
    for (int i = 0; i < arr.size(); i++)
    {
        preSum += arr[i];
        for (int i = 0; i < arr.size(); i++)
        {
            if (preSum == k)
            {
                len = max(len, i + 1);
            }
        }
        int rem = preSum - k;
        if (hash.find(rem) != hash.end())
        {
            len = max(len, i - hash[rem]);
        }
        if (hash.find(preSum) == hash.end())
        {
            hash[preSum] = i;
        }
    }
    return len;
}
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
        cout << "The Length of the Longest Subarray with the Sum of K is " << Most_optimal_Sub(arr, k) << endl;
    }
    return 0;
}