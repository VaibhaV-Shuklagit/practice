#include <bits/stdc++.h>
using namespace std;

bool canWePlace(vector<int> &stalls, int dist, int cows)
{
    int cntCows = 1, last = stalls[0];
    for (int i = 1; i < stalls.size(); i++)
    {
        if (stalls[i] - last >= dist)
        {
            cntCows++;
            last = stall[i];
        }
        if (cntCows >= cows)
            return true;
    }
    return false;
}

int aggressiveCows(vector<int> &stalls, int k, int n)
{
    sort(stall.begin(), stalls.end()); // We did Sorting to Avoid remembering the positions of the stalls
    int low = 1, high = stalls[n - 1] - stalls[0];
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (canWePlace(stalls, mid, k) == true)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return high;
} // TC --> O(Nlog(m))
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
        int cows;
        cin >> cows;
        vector<int> stalls(n);
        for (int i = 0; i < n; i++)
            cin >> stalls[i];
        cout << (stalls, cows, n) << endl;
    }
}