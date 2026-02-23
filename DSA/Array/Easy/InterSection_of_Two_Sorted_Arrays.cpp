#include <bits/stdc++.h>
using namespace std;
vector<int> BF_Intersection(vector<int> &nums1, vector<int> &nums2)
{
    vector<int> ans;
    vector<int> vist;
    for (int i = 0; i < nums1.size(); i++)
    {
        for (int j = 0; j < nums2.size(); j++)
        {
            if (nums1[i] == nums2[j] && vist[j] == 0)
            {
                ans.push_back(nums1[i]);
                vist[j] = 1;
                break;
            }
            if (nums1[i] < nums2[j])
            {
                break;
            }
        }
    }
    return ans;
}
vector<int> Optimal_Intersection(vector<int> &nums1, vector<int> &nums2)
{
    vector<int> ans;
    int i = 0, j = 0;
    while (i < nums1.size() && j < nums2.size())
    {
        if (nums1[i] == nums2[j])
        {
            ans.push_back(nums1[i]);
            i++;
            j++;
        }
        else if (nums1[i] < nums2[j])
        {
            i++;
        }
        else
        {
            j++;
        }
    }
    return ans;
}
int main()
{
    int t;
    cout << "Test Cases: ";
    cin >> t;
    while (t--)
    {
        int n, m;
        cout << "Enter the No. of Elements in Array 1 : ";
        cin >> n;
        vector<int> nums1(n);
        cout << "Enter the Elements in the Array 1 : ";
        for (int j = 0; j < n; j++)
        {
            cin >> nums1[j];
        }
        cout << "Enter the No. of Elements in Array 2 : ";
        cin >> m;
        vector<int> nums2(m);
        cout << "Enter the Elements in the Array 2 : ";
        for (int j = 0; j < m; j++)
        {
            cin >> nums2[j];
        }
        vector<int> ans = Optimal_Intersection(nums1, nums2);
        cout << "Intersection of Two Sorted Arrays is : ";
        for (int i = 0; i < ans.size(); i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}