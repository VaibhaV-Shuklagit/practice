#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll Evanescent(string &s)
{
    ll n = s.size();
    int len = 1;
    int cnt = 1;
    if(n == 3)
    {
        if(s[0] == s[2]) return 1;
        else return 2;
    }
    else
    {   
        int cnt = 1;
        int milgya = 0;
        for(int i = 1; i < n; i++)
        {
            if(s[i] != s[i - 1]) 
            {
                cnt++;
            }
            else{
                
            }
            if(i < n - 2 && s[i - 1] == s[i + 1]) milgya++;
        }
        if(n == cnt) return cnt - 1;
        else{
            if(milgya >= 1) return cnt;
            else return cnt - 1;
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
        ll n;
        cin >> n;
        string s;
        cin >> s;
        cout << Evanescent(s) << "\n";
    }
}