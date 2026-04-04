#include <bits/stdc++.h>
using namespace std;
vector<int> BF_Majority(vector<int> &nums)
{
    vector<int> ans;
    for (int i = 0; i < nums.size(); i++)
    {
        if (ans.size() == 0 || ans[ans.size() - 1] != nums[i])
        {
            int cnt = 0;
            for (int j = 0; j < nums.size(); j++)
            {
                if (nums[j] == nums[i])
                    cnt++;
            }
            if (cnt > nums.size() / 3)
                ans.push_back(nums[i]);
        }
        // if(ans.size() == 2) break; // At max Only 2 elements can be the majority elements at once in an array
    }
    return ans;
} // TC --> O(N2)
// SC --> O(N)
vector<int> Better_Majority(vector<int> &nums)
{
    vector<int> ls;
    unordered_map<int, int> mpp;
    int n = nums.size();
    int mini = (int)(n / 3) + 1;
    for (int i = 0; i < nums.size(); i++)
    {
        mpp[nums[i]]++;
        if (mpp[nums[i]] == mini)
        {
            ls.push_back(nums[i]);
        }
        if (ls.size() == 2)
            break; // It's not necessary but adding this can help in the preventetion of extra travesing
    }
    // We may have to make the ans array sorted in acc to question
    // In leetcode I used two loops to avoid sorting
    return ls;
} // TC --> O(N) [Best Case] && O(N2) [Worst Case]
// SC --> O(N)
vector<int> Optimal_Majority(vector<int> nums)
{
    int cnt1 = 0, cnt2 = 0;
    int el1, el2;
    for (int i = 0; i < nums.size(); i++)
    {
        if (cnt1 == 0 && el2 != nums[i])
        {
            cnt1 = 1;
            el1 = nums[i];
        }
        else if (cnt2 == 0 && el1 != nums[i])
        {
            cnt2 = 1;
            el2 = nums[i];
        }
        else if (nums[i] == el1)
            cnt1++;
        else if (nums[i] == el2)
            cnt2++;
        else
        {
            cnt1--, cnt2--;
        }
    }
    vector<int> ls;
    cnt1 = 0, cnt2 = 0; // Rechecking If the Elements we found are actually to be the Majority Elements
    for (int i = 0; i < nums.size(); i++)
    {
        if (el1 == nums[i])
            cnt1++;
        if (el2 == nums[i])
            cnt2++;
    }
    int mini = (int)(nums.size() / 3) + 1;
    if (cnt1 >= mini)
        ls.push_back(el1);
    if (cnt2 >= mini)
        ls.push_back(el2);
    // sort ans array If Necessary
    return ls;
} // Extension of Moore's Voting Algo
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
        vector<int> ans = Optimal_Majority(nums);
        for (int i = 0; i < ans.size(); i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}