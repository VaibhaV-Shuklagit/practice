#include<bits/stdc++.h>
using namespace std;
using ll = long long; 
void AvtoBus(ll n)
{
ll maxbus = LLONG_MIN;
ll minbus = LLONG_MAX;
if(n % 2 != 0)
{
    cout << "-1\n";
    return;
}
if(n == 2) {
    cout << "-1\n";
return;
}
if(n % 4 == 0)
{
maxbus = max(n / 4, maxbus);
minbus = min(n / 4, minbus);
}
if(n % 6 == 0)
{
    maxbus = max(n / 6, maxbus);
    minbus = min(n / 6, minbus);
} 
if(n > 6){
    maxbus = max(n / 6 + 1, maxbus);
    minbus = min(n / 6 + 1, minbus);
}
if(n > 4){
    maxbus = max(n / 4, maxbus);
    minbus = min(n / 4, minbus);
}
cout << minbus << " " << maxbus << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        // vector<int> nums(n);
        // for(int i = 0; i < n; i++) cin >> nums[i];
        AvtoBus(n);
    }
}