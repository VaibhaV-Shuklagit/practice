#include <bits/stdc++.h>
using namespace std;
vector<int> jobSequencing_BF(vector<int> &deadline, vector<int> &profit)
{
    int n = deadline.size();
    int cnt = 0;
    int totProfit = 0;

    // pair the profit and deadline of
    // all the jos together
    vector<pair<int, int>> jobs;
    for (int i = 0; i < n; i++)
    {
        jobs.push_back({profit[i], deadline[i]});
    }

    // sort the jobs based on profit
    // in decreasing order
    sort(jobs.begin(), jobs.end(),
         greater<pair<int, int>>());

    vector<int> slot(n, 0);
    for (int i = 0; i < n; i++)
    {
        int start = min(n, jobs[i].second) - 1;
        for (int j = start; j >= 0; j--)
        {

            // if slot is empty
            if (slot[j] == 0)
            {
                slot[j] = 1;
                cnt++;
                totProfit += jobs[i].first;
                break;
            }
        }
    }

    return {cnt, totProfit};
} // TC --> O(N^2)
// SC --> O(N)
vector<int> jobSequencing_Optimal(vector<int> &deadline, vector<int> &profit)
{
    int n = deadline.size();
    int cnt = 0;
    int totProfit = 0;

    // pair the profit and deadline of
    // all the jos together
    vector<pair<int, int>> jobs;
    for (int i = 0; i < n; i++)
    {
        jobs.push_back({profit[i], deadline[i]});
    }

    // sort the jobs based on profit
    // in decreasing order
    sort(jobs.begin(), jobs.end(),
         greater<pair<int, int>>());

    vector<int> slot(n, 0);
    for (int i = 0; i < n; i++)
    {
        int start = min(n, jobs[i].second) - 1;
        for (int j = start; j >= 0; j--)
        {

            // if slot is empty
            if (slot[j] == 0)
            {
                slot[j] = 1;
                cnt++;
                totProfit += jobs[i].first;
                break;
            }
        }
    }
    return {cnt, totProfit};
} // TC --> O(NlogN)
// SC --> O(N)

int main()
{
    vector<int> deadline = {2, 1, 2, 1, 1};
    vector<int> profit = {100, 19, 27, 25, 15};
    vector<int> ans1 = jobSequencing_BF(deadline, profit);
    vector<int> ans2 = jobSequencing_Optimal(deadline, profit);
    cout << ans1[0] << " " << ans1[1] << "\n";
    cout << ans2[0] << " " << ans2[1] << "\n";
    return 0;
}