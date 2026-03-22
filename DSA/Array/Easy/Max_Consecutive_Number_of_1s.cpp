#include <bits/stdc++.h>
using namespace std;
int MaxConsecutives(vector<int> &arr)
{
    int n = arr.size();
    int cnt = 0, maxi = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 1)
        {
            cnt++;
            maxi = max(cnt, maxi);
        }
        else
        {
            cnt = 0;
        }
    }
    return maxi;
} // TC --> O(N)
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
        cout << "Maximum Consecutive Ones (Brute Force): " << MaxConsecutives(nums) << endl;
    }
}