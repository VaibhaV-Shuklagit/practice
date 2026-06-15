#include <bits/stdc++.h>
using namespace std;

int Nth_power_Function(long long mid, int n, int m) // Binary Exponentiation algorithm 
{
    long long ans = 1;
    while (n > 0)
    {
        if (n % 2 == 1)
        {
            ans = ans * mid;
            n = n - 1;
            if(ans > m) return 2; // to avoid int overflow
        }
        else
        {   
            if(mid > m) return 2; // to avoid int overflow
            mid = mid * mid;
            n = n / 2;
        }
    }
    return 0;
} // TC --> O(logn)

int Nth_Root_Optimal(int n, int m)
{
    int low = 1, high = m;
    int ans = 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        int power = Nth_power_Function(mid, n, m);
        if (power <= 1)
        {
            ans = mid;
            low = mid + 1;
        }
        else
            high = mid - 1;
    }
    return high; // either return ans
} // TC --> O(logm)*O(logn)
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
        int m;
        cin >> m;
        cout << Nth_Root_Optimal(n,m) << endl;
    }
}