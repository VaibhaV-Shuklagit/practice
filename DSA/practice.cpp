#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll Evanescent(string &s)
{
    ll n = s.size();
    ll cnt = 0;
    ll cnt1 = 0;
    ll cnt2 = 0;
    for(int i = 0; i < n; i++)
    {   
        char key = s[i];
        cnt++;
        bool flag = false;
        while(s[i] == key){
            flag = true;
            i++;
        }
        if(flag == true) i--;
        else if(i > 0 && i < n - 1)
        {
            if(cnt1 == 0 && s[i-1]== s[i + 1]){
                if(cnt2 == 1) cnt--;
                else cnt-=2;
                cnt1++;
            }
            else if(cnt2 == 0) cnt2++,cnt--;
        }
    }
    return cnt;
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