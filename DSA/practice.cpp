#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void Heapify(vector<int> &nums)
{
    int n = nums.size();
    for (int i = 1; i < n; i += 2)
    {
        for (int j = i; j < n; j *= 2)
        {
            if (nums[j] == i)
                continue;
            else
            {
                if (nums[j] % (2 * i) != 0)
                {
                    cout << "No\n"; 
                    return;
                }
            }
        }
    }
    cout << "Yes\n";
}
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<int> nums(n + 1);
        for (int i = 1; i < n; i++)
            cin >> nums[i];
         for (int i = 1; i <= 200000; i++)
        {
            for (int j = i; j <= 200000; j += i)
            {
                div[j]++;
            }
        }
    }
    return 0;
}
