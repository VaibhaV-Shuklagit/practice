#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void MakeAP(ll a, ll b, ll c)
{
   if(a == b && c == b)
   {
    cout << "Yes\n";
    return;
   }
   else if(b - a == c - b)
   {
        cout << "Yes\n";
        return;
   }
   else if(a == 1 && c == 1){
    cout << "Yes\n";
    return;
   }
   else
   {
    ll x = (2*b - c)/a;
    if(x > 0 && 2*b == (c + a*x)){
        cout << "Yes\n";
        return;
    }
    x = (c + a)/(2*b);
    if(x > 0 && 2*b*x == (c + a)){
        cout << "Yes\n";
        return;
    }
    x = (2*b - a)/c;
    if(x > 0 && 2*b == (c*x + a)){
        cout << "Yes\n";
        return;
    }
    cout << "No\n";
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
        ll a, b, c;
        cin >> a >> b >> c;
        MakeAP(a, b, c);
    }
}