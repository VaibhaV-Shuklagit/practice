#include <bits/stdc++.h>
using namespace std;
using ld = long double;

ld minimiseMaxDistance_BF(vector<int> &nums, int k)
{
    int n = nums.size();
    vector<int> howMany(n - 1, 0);
    for (int gasStations = 1; gasStations <= k; gasStations++)
    {
        ld maxSection = -1.0;
        int maxInd = -1.0;
        for (int i = 0; i < n - 1; i++)
        {
            ld diff = (nums[i + 1] - nums[i]);
            ld sectionLength = diff / (ld)(howMany[i] + 1);
            if (sectionLength > maxSection)
            {
                maxSection = sectionLength;
                maxInd = i;
            }
        }
        howMany[maxInd]++;
    }
    ld maxAns = -1;
    for (int i = 0; i < n - 1; i++)
    {
        ld diff = (nums[i + 1] - nums[i]);
        ld sectionLength = diff / (ld)(howMany[i] + 1);
        maxAns = max(maxAns, sectionLength);
    }
    return maxAns;
} // TC --> O(k*n) + O(n)
// SC --> O(n-1)

ld minimiseMaxDistance_Better(vector<int> &nums, int k)
{
    int n = nums.size();
    vector<int> howMany(n - 1, 0);
    priority_queue<pair<ld, int>> pq;
    for (int i = 0; i < n - 1; i++)
       pq.push({(ld)(nums[i + 1] - nums[i]), i});

    for (int gasStations = 1; gasStations <= k; gasStations++)
    {
        auto tp = pq.top();
        pq.pop();
        int secInd = tp.second;
        howMany[secInd]++;
        ld iniDiff = nums[secInd + 1] - nums[secInd];
        ld newSecLen = iniDiff / (ld)(howMany[secInd] + 1);
        pq.push({newSecLen, secInd});
    }
    return pq.top().first;
} // TC --> O(KlogN + NlogN)
// SC --> 2*O(N - 1)

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> GasStations(n);
        for (int i = 0; i < n; i++)
            cin >> GasStations[i];
        cout << minimiseMaxDistance_BF(GasStations, k) << endl;
        cout << minimiseMaxDistance_Better(GasStations, k) << endl;
    }
}