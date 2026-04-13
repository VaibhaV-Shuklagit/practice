
#include <bits/stdc++.h>
using namespace std;
int BF_Maximum_Product(vector<int> nums)
{
    int maxi = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        int prod = 1;
        for (int j = i; j < n; j++)
        {
            prod = prod * arr[j];
            maxi = max(maxi, prod);
        }
    }
    return maxi;
} // TC --> O(N2)
// SC --> O(1)
int Optimal_Maximum_Produt(vector<int> nums)
{
    int n = nums.size();
    int prefix = 1;
    int suffix = 1;
    int prod = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (prefix == 0)
            prefix = 1;
        if (suffix == 0)
            suffix = 1;
        suffix = suffix * nums[n - i];
        prefix = prefix * nums[i];
        prod = max(prod, max(suffix, prefix));
    }
    return prod;
} // TC --> O(N)
// SC --> O(1)
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
        COUT << BF_Maximum_Product(nums);
        cout << Optimal_Maximum_Produt(nums);
    }
    return 0;
}