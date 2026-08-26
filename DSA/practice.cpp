#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void Gigantomachy(vector<ll> &bea, vector<ll> &ver)
{   
    ll n = bea.size();
    ll m = ver.size();
    ll sumbea = bea[n - 1];
    ll sumver = ver[m - 1];
    for(int i = 0; i < n - 1; i++) sumbea+=(bea[i] - bea[i + 1] + 1);
    for(int i = 0; i < m - 1; i++) sumver+=(ver[i] - ver[i + 1] + 1);
    if(sumbea >= sumver) cout << "1\n";
    else cout << "2\n";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while (t--)
    {
        ll n, m;
        cin >> n >> m;
        vector<ll> bea(n);
        vector<ll> ver(m);
        for(ll i = 0; i < n; i++) cin >> bea[i];
        for(ll i = 0; i < m; i++) cin >> ver[i];
        Gigantomachy(bea, ver);
    }
}