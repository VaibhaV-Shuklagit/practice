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

        vector<int> prime(n + 1);
        prime[1] = 0;

        for (int i = 2; i <= n; i++)
        {
            if (!prime[i])
                continue;
            for (int j = i * i; j <= n; j += i)
            {
                prime[j] = 0;
            }
        } // TC --> O(Nlog(logN))
        // SC --> O(N)
    }
    return 0;
}