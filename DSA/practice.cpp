#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void BeautifulArray(ll n, ll k, ll b, ll s)
{
    if (s < k * b)
    {
        cout << "-1\n";
         return;
    }
    
    vector<ll> nums(n);
    nums[0] = k * b;
    s -= k * b;
    for (int i = 1; i < n; i++)
    {
            if (s < k)
            {
                nums[i] = s;
                s = 0;
            }
            else
            {
                s -= k - 1;
                nums[i] = k - 1;
            }
    }
    if (s > 0)
        cout << "-1\n";
    else
    {
        for (int i = 0; i < n; i++)
            cout << nums[i] << " ";
        cout << "\n";
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
        ll n, b, k, s;
        cin >> n >> k >> b >> s;
        BeautifulArray(n, k, b, s);
    }
    return 0;
}
