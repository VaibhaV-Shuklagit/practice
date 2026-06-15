#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void OmskProgrammers(ll a, ll b, ll x)
{
    if (a == b)
    {
        cout << "0\n";
        return;
    }
    ll cnt = 0;
    ll maxop = LLONG_MAX;
    while (a != b)
    {
        maxop = min(abs(a - b) + cnt, maxop);
        if (a > b)
            a = a / x;
        else
            b = b / x;
        cnt++;
    }
    maxop = min(maxop,cnt);
    cout << maxop << "\n";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while (t--)
    {
        ll a, b, x;
        cin >> a >> b >> x;
        OmskProgrammers(a, b, x);
    }
}