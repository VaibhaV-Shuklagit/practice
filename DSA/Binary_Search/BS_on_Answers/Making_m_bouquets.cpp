#include <bits/stdc++.h>
using namespace std;
int Days(vector<int> nums, int mid, int m, int k, int n)
{
    int b, s;
    b = s = 0;
    for (int i = 0; i < n; i++)
    {
        if (nums[i] <= mid)
            s++;
        else
            s = 0;
        if (s == k)
        {
            b++;
            s = 0;
        }
    }
    return b;
}
vector<int> Largest_Smallest(vector<int> nums, int n)
{
    int larg = INT_MIN;
    int Small = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (nums[i] > larg)
            larg = nums[i];
        if (nums[i] < Small)
            Small = nums[i];
    }
    return {Small, larg};
}
int Make_m_bouquets(vector<int> nums, int m, int k, int n)
{
    if ((long long)m * k > n)
        return -1;
    int low = Largest_Smallest(nums, n)[0];
    int high = Largest_Smallest(nums, n)[1];
    int ans = 0;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        int b = Days(nums, mid, m, k, n);
        if (b >= m)
        {
            ans = mid;
            high = mid - 1;
        }
        else low = mid +1;
    }
    return ans;
} // TC --> O(Nlog(maxelement))
// SC --> O(1)
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int m;
        cin >> m;
        int k;
        cin >> k;
        vector<int> nums(n);
        for (int i = 0; i < n; i++)
        {
            cin >> nums[i];
        }
        cout << Make_m_bouquets(nums, m, k, n) << endl;
    }
}