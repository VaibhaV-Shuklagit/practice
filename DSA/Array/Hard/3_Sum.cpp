#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> BF_3_Sum(int n, vector<int> &nums)
{
    set<vector<int>> st;
    sort(nums.begin(), nums.end());
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                if (nums[i] + nums[j] + nums[k] == 0)
                {
                    vector<int> temp = {nums[i], nums[j], nums[k]};
                    st.insert(temp);
                }
            }
        }
    }
    vector<vector<int>> ans(st.begin(), st.end());
    return ans;
} // TC --> O(N3) + O(NLogN)
// SC --> 2 X O(No. of Triplets)
vector<vector<int>> Optimal_3_Sum(int n, vector<int> &nums)
{
    vector<vector<int>> ans;
    sort(nums.begin(), nums.end());
    for (int i = 0; i < n; i++)
    {
        if (i > 0 && nums[i] == nums[i - 1])
            continue;
        int j = i + 1;
        int k = n - 1;
        while (j < k)
        {
            int sum = nums[i] + nums[j] + nums[k];
            if (sum < 0)
            {
                j++;
            }
            else if (sum > 0)
            {
                k--;
            }
            else
            {
                vector<int> temp = {nums[i], nums[j], nums[k]};
                ans.push_back(temp);
                j++;
                k--;
                while (j < k && nums[j] == nums[j - 1])
                    j++;
                while (j < k && nums[k] == nums[k + 1])
                    k--;
            }
        }
    }
    return ans;
} // TC --> O(N2) + O(NLogN)
// SC --> O()
int main()
{
    int t;
    cout << "Enter the No. of Test Cases : ";
    cin >> t;
    while (t--)
    {
        int n;
        cout << "Enter the Number of Elements : ";
        cin >> n;
        vector<int> nums(n);
        cout << "Enter the Elements in the Array : ";
        for (int i = 0; i < n; i++)
        {
            cin >> nums[i];
        }
        int r = BF_3_Sum(n, nums).size();
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cout << BF_3_Sum(n, nums)[i][j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}