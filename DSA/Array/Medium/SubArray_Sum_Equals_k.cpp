#include <bits/stdc++.h>
using namespace std;
int Most_optimal_Sub(vector<int> &arr, int k)
{
    int preSum = 0, cnt = 0;
    unordered_map<int, int> hash;
    hash[preSum]++;
    for (int i = 0; i < arr.size(); i++)
    {
        preSum += arr[i];
        int rem = preSum - k;
        cnt += hash[rem];
        hash[preSum] += 1;
    }
    return cnt;
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
        cout << "The Number of SubArrays Having Sum of K is " << Most_optimal_Sub(arr, k) << endl;
    }
    return 0;
}