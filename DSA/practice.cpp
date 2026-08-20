#include <bits/stdc++.h> 
using namespace std; 
using ll = long long; 

void StrangePartition(vector<ll> nums, ll x) { 
    ll n = nums.size(); 
    ll maximalbeauty = 0; 
    ll minimalbeauty = 0; 
    vector<ll> check(n, 0); 
    
    maximalbeauty += ceil((double)nums[0] / x); 
    
    for (ll i = 1; i < n; i++) { 
        maximalbeauty += ceil((double)nums[i] / x); 
        
        if ((nums[i] + nums[i - 1]) % x == 0) { 
            if (check[i - 1] == 0) { 
                minimalbeauty += ceil((double)(nums[i] + nums[i - 1]) / x); 
                check[i] = 1; 
                check[i - 1] = 1; 
            } 
        } else { 
            if (check[i - 1] == 0) { 
                minimalbeauty += ceil((double)nums[i - 1] / x); 
                check[i - 1] = 1; 
            } 
        } 
    } 
    
    if (check[n - 1] == 0) 
        minimalbeauty += ceil((double)nums[n - 1] / x); 
        
    cout << minimalbeauty << " " << maximalbeauty << "\n"; 
} 

int main() { 
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    ll t; 
    cin >> t; 
    while (t--) { 
        ll n, x; 
        cin >> n >> x; 
        vector<ll> nums(n); 
        for (ll i = 0; i < n; i++) cin >> nums[i]; 
        StrangePartition(nums, x); 
    } 
}