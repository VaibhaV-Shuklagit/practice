#include <bits/stdc++.h>
using namespace std;
// Inbuilt Sqrt can also be used to find the Sqrt of a number
int Sqrt_BF(int x)
{
    int ans = 1;
    for (int i = 1; i <= x; i++)
    {
        if (i <= x / i)
            ans = i;
        else
            break;
    }
    return ans;
}
int Sqrt_Optimal(int x)
{
    int low = 1, high = x;
    int ans = 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (mid <= x / mid)
        {
            ans = mid;
            low = mid + 1;
        }
        else
            high = mid - 1;
    }
    return high; // either return ans
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << Sqrt_BF(n) << endl;
        cout << Sqrt_Optimal(n) << endl;
    }
}