#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void ExcitingBets(ll x, ll y)
{
    if (x == y)
        cout << "0 0\n";
    else if (abs(x - y) == 1)
        cout << "1 0\n";
    else
    {
        ll div = abs(x - y);
        if (x % div == 0 && y % div == 0)
            cout << div << " 0\n";
        else
        {
            ll cnt1 = div - (x % div);
            ll cnt2 = (x % div);
            cout << div << " " << min(cnt1, cnt2) << "\n";
        }
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
        ll x, y;
        cin >> x >> y;
        ExcitingBets(x, y);
    }
}