#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> BF_4_Sum(int target, vector<int> &nums)
{
    int n = nums.size();
    set<vector<int>> st;
    sort(nums.begin(), nums.end());
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                for (int l = k + 1; l < n; l++)
                {
                    long long sum = nums[i] + nums[j]; // we are doing this to avoid integer overflow.
                    sum += nums[k];                    // we can do this through another method as well :
                    sum += nums[l];                    // long long sum = long long nums[i] + nums[j] + nums[k] + nums[l]
                    if (sum == target)
                    {
                        vector<int> temp = {nums[i], nums[j], nums[k], nums[l]};
                        st.insert(temp);
                    }
                }
            }
        }
    }
    vector<vector<int>> ans(st.begin(), st.end());
    return ans;
} // TC --> O(N4) + O(NLogN)
// SC --> 2 X O(No. of Quadruplet)
vector<vector<int>> Better_4_Sum(int target, vector<int> &nums)
{
    int n = nums.size();
    set<vector<int>> st;
    sort(nums.begin(), nums.end());
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            set<long long> hashset;
            for (int k = j + 1; k < n; k++)
            {
                long long sum = nums[i] + nums[j];
                sum += nums[k];
                long long fourth = target - (sum);
                if (hashset.find(fourth) != hashset.end())
                {
                    vector<int> temp = {nums[i], nums[j], fourth, nums[k]};
                    st.insert(temp);
                }
                hashset.insert(nums[k]);
            }
        }
    }
    vector<vector<int>> ans(st.begin(), st.end());
    return ans;
} // TC --> O(N3LogM)
// SC --> O(N) + 2(O(No. of Quadraplets))
vector<vector<int>> Optimal_4_Sum(int target, vector<int> &nums)
{
    int n = nums.size();
    vector<vector<int>> ans;
    sort(nums.begin(), nums.end());
    for (int i = 0; i < n; i++)
    {
        if (i > 0 && nums[i] == nums[i - 1])
            continue;
        for (int j = i + 1; j < n; j++)
        {
            if (j > i + 1 && nums[j] == nums[j - 1])
                continue;
            int k = j + 1;
            int l = n - 1;
            while (k < l)
            {
                long long sum = nums[i];
                sum += nums[j];
                sum += nums[k];
                sum += nums[l];
                if (sum < target)
                {
                    k++;
                }
                else if (sum > target)
                {
                    l--;
                }
                else
                {
                    vector<int> temp = {nums[i], nums[j], nums[k], nums[l]};
                    ans.push_back(temp);
                    k++;
                    l--;
                    while (k < l && nums[k] == nums[k - 1])
                        k++;
                    while (k < l && nums[l] == nums[l + 1])
                        l--;
                }
            }
        }
    }
    return ans; 
   } // TC --> O(N3)
    // SC --> O(No. of Quadraplets) [Its Not the Extra Space, It's Just the Space which we are using to return the Ans]
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
            int target;
            cout << "Enter the Number to be found : ";
            cin >> target;
            vector<int> nums(n);
            cout << "Enter the Elements in the Array : ";
            for (int i = 0; i < n; i++)
            {
                cin >> nums[i];
            }
            int r = BF_3_Sum(target, nums).size();
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