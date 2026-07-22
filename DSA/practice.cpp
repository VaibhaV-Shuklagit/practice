#include<bits/stdc++.h>
using namespace std;
using ll = long long; 
void MakeItIncreasing(vector<ll>& nums)
{
ll n = nums.size();
ll cnt = 0;
for(ll i = n - 2; i >= 0; i--)
{
    if(nums[i] >= nums[i + 1])
    {
        while(nums[i] >= nums[i + 1])
        {
            nums[i] = nums[i]/2;
            cnt++;
        }
    }
    if(i > 0 && nums[i + 1]) 
    {
        cout << "-1\n";
        return;
    } 
}
cout << cnt << "\n";
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
        for(ll i = 0; i < n; i++) cin >> nums[i];
        MakeItIncreasing(nums);
    }
}