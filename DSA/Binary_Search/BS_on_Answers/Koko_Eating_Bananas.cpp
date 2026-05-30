#include <bits/stdc++.h>
using namespace std;
int koko_hours(vector<int> nums, int n, int mid) // Pre-Computation to find how much koko will takes the time to eat bananas
{
    int k = 0;
    for (int i = 0; i < n; i++)
    {
        k += ceil((double)nums[i] / (double)mid);
    }
    return k;
}
int Largest_Element(vector<int> nums, int n)
{
    int larg = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (nums[i] > larg)
            larg = nums[i];
    }
    return larg;
}
int Koko_Optimal(vector<int> nums, int n, int h)
{
    int larg = Largest_Element(nums, n);
    int low = 1;
    int high = larg;
    int ans = 0;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        int k = koko_hours(nums, n, mid);
        if (k <= h)
        {
            ans = mid;
            high = mid - 1;
        }
        else
            low = mid + 1;
    }
    return ans;
} // TC --> O(Nlog(maxelement))
// SC --> O(1)
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int h;
        cin >> h;
        vector<int> nums(n);
        for (int i = 0; i < n; i++)
        {
            cin >> nums[i];
        }
        cout << Koko_Optimal(nums, n, h) << endl;
    }
}