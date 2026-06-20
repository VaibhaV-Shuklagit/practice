#include <bits/stdc++.h>
using namespace std;

int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);  

    int t;
    cin >> t;
    while (t--)
    {   
        int n;
        cin >> n;

        vector<int> div(n + 1);
        
        for (int i = 1; i <= n; i++)
        {
            for (int j = i; j <= n; j += i)
            {
                div[j]++;
            }
        } // TC --> O(NlogN)
        // SC --> O(N)
        for (int i = 1; i <= n; i++)
        {
            cout << div[i] << "\n";
        }
    }
    return 0;
}