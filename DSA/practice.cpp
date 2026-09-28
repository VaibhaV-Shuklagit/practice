#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void ShoeShuffling(vector<ll> &nums)
{
    int n = nums.size();
    vector<int> shuffled;
    for(ll i = 0; i < n; i++)
    {
        ll start = i + 1;
        ll len = 1;
        while(i < n - 1 && nums[i] == nums[i + 1])
        {
            i++;
            len++;
            shuffled.push_back(i + 1);
        }
        if(len == 1)
        {
            cout << "-1\n";
            return;
        }
        // shuffled.push_back(i + 1);
        shuffled.push_back(start);
    }
    for(int i = 0; i < shuffled.size(); i++) cout << shuffled[i] << " ";
    cout << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> nums(n);
        for (int i = 0; i < n; i++)
            cin >> nums[i];
        ShoeShuffling(nums);
    }
    return 0;
}
