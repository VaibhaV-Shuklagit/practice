#include <bits/stdc++.h>
using namespace std;

int Kth_Positive_BF(vector<int> nums, int k, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        if (nums[i] <= k)
            k++;
        else
            break;
    }
    return k;
} // TC --> O(N)

int Kth_Positive_Optimal(vector<int> nums, int k, int n)
{
    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        int missing = nums[mid] - (mid + 1); // Number of element missing from the corresponding Index
        if (missing < k)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return k + low; // or return k + high + 1;
} // TC --> O(log(n))

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
        int k;
        cin >> k;
        vector<int> nums(n);
        for (int i = 0; i < n; i++)
        {
            cin >> nums[i];
        }
        cout << Kth_Positive_BF(nums, k, n) << endl;
        cout << Kth_Positive_Optimal(nums, k, n) << endl;
    }
}