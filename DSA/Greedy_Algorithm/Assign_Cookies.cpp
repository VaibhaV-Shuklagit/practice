#include<bits/stdc++.h>
using namespace std;

int findContentChildren(vector<int> &g, vector<int> &s, int n1, int n2)
{
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int left = 0;
        int right = 0;
        int cnt = 0;
        while(left < g.size() && right < s.size())
        {
            if(s[right] >= g[left]){
                cnt++;
                left++;
            }
            right++;
        }
        return cnt;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n1, n2;
        cin >> n1 >> n2;
        vector<int> greedy(n1);
        vector<int> cookies(n2);
        for(int i = 0; i < n1; i++) cin >> greedy[i];
        for(int i = 0; i < n2; i++) cin >> cookies[i];
        cout << findContentChildren(greedy, cookies, n1, n2) << "\n";
    }
}