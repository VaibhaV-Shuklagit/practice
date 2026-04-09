#include <bits/stdc++.h>
using namespace std;
vector<int> BF_Missing_Repaeating(vector<int> &nums)
{
    int n = nums.size();
    int repeating = -1;
    int missing = -1;
    for (int i = 1; i <= n; i++)
    {
        int cnt = 0;
        for (int j = 0; j < n; j++)
        {
            if (nums[j] == i)
                cnt++;
        }
        if (cnt == 2)
            repeating = i;
        else if (cnt == 0)
            missing = i;
        if (repeating != -1 && missing != -1)
            break;
    }
    return {repeating, missing};
} // TC --> O(N2)
// SC --> O(1)
vector<int> Better_Missing_Repaeating(vector<int> &nums)
{
    int n = nums.size();
    int hash[n + 1] = {0};
    for (int i = 0; i < nums.size(); i++)
    {
        hash[a[i]]++;
    }
    int repeating = -1, missing = -1;
    for (int i = 1; i <= n; i++)
    {
        if (hash[i] == 2)
            repeating = i;
        else if (hash[i] == 0)
            missing = i;

        if (repeating != -1 && missing != -1)
            break;
    }
    return {repeating, missing};
} // TC --> O(2N)
// SC --> O(N)
vector<int> Optimal1_Missing_Repeating(vector<int> nums)
{
    long long n = nums.size();
    // S - Sn = x - y
    // S^2 - Sn^2 = x^2 - y^2
    long long SN = (n * (n + 1)) / 2;
    long long S2N = (n * (n + 1) * (2 * n + 1)) / 6;
    long long S = 0, S2 = 0;
    for (int i = 0; i < n; i++)
    {
        S += nums[i];
        S2 += (long long)nums[i] * (long long)nums[i];
    }
    long long val1 = S - SN; // x - y
    long long val2 = S2 - S2N;
    val2 = val2 / val1; // x + y
    long long x = (val1 + val2) / 2;
    long long y = x - val1;
    return { (int)x, (int)y }
} // We just used mathematics to find the value of x and y
// TC --> O(N)
// SC --> O(1)
// long long data type is used to prevent any integer overflow
int main()
{
    int t;
    cout << "Enter the No. of Test Cases : ";
    cin >> t;
    while (t--)
    {
        int n;
        cout << "Enter the Number of Elements : ";
        cin >> n;
        vector<int> nums(n);
        cout << "Enter the Elements in the Array : ";
        for (int i = 0; i < n; i++)
        {
            cin >> nums[i];
        }
        vector<int> ans = BF_Missing_Repaeating(nums);
        for (int i = 0; i < ans.size(); i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}