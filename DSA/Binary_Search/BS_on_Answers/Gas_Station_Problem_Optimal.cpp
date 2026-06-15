#include <bits/stdc++.h>
using namespace std;
using ld = long double;

int numberOfGasStationsRequired(ld dist, vector<int> &nums)
{
    int cnt = 0;
    for (int i = 1; i < nums.size(); i++)
    {
        int numberInBetween = ((nums[i] - nums[i - 1]) / dist);
        if ((nums[i] - nums[i - 1]) / dist == numberInBetween * dist)
            numberInBetween--;
        cnt += numberInBetween;
    }
    return cnt;
}

ld minimiseMaxDistance_Optimal(vector<int> &nums, int k)
{
    int n = nums.size();
    ld low = 0;
    ld high = 0;
    for (int i = 0; i < n - 1; i++)
        high = max(high, (ld)(nums[i + 1] - nums[i]));
    ld diff = 1e-6;
    while (high - low > diff)
    {
        ld mid = (low + high) / 2.0;
        int cnt = numberOfGasStationsRequired(mid, nums);
        if (cnt > k)
            low = mid;
        else
            high = mid;
    }
    return high;
} // TC --> O(NlogN)

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> GasStations(n);
        for (int i = 0; i < n; i++)
            cin >> GasStations[i];
        cout << minimiseMaxDistance_Optimal(GasStations, k) << endl;
}
}