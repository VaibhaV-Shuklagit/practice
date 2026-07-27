#include <bits/stdc++.h>
using namespace std;
using ll = long long;
bool comp(const pair<ll, ll> &a, const pair<ll, ll> &b) {
    return a.second < b.second;
}
ll ArrayCloningTechnique(vector<ll> &nums)
{
    ll n = nums.size();
    ll maxele = *max_element(nums.begin(), nums.end());
    ll minele = *min_element(nums.begin(), nums.end());
    if (minele == maxele)
        return 0;
    else
    {
        unordered_map<ll, ll> hash;
        for (int i = 0; i < n; i++)
        {
            hash[nums[i]]++;
        }
        auto it = max_element(hash.begin(), hash.end(), comp);
        ll maxele2 = it->second;
        
    }
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
        cout << ArrayCloningTechnique(nums) << "\n";
    }
}