#include <bits/stdc++.h>
using namespace std;
vector<int> BF_Leaders(vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        bool leader = true;
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[j] > arr[i])
            {
                leader = false;
                break;
            }
        }
        if (leader == true)
            ans.push_back(arr[i]);
    }
} // TC --> O(N2);
// SC --> O(N) {Extra Space} as well in worst case
vector<int> Optimal_Leaders(vector<int> &arr)
{
    vector<int> ans;
    int maxi = INT_MIN;
    int n = arr.size();
    for (int i = n - 1; i >= 0; i--)
    {
        if (arr[i] > maxi)
        {
            ans.push_back(arr[i]);
            maxi = arr[i];
        }
    }
    // reverse or sort ans array if required as per question
    return ans;
} // TC --> O(N)
// SC --> As same as Brute Force Approach 
int main()
{
    int t;
    cout << "Test Cases: ";
    cin >> t;
    while (t--)
    {
        int n;
        cout << "Enter the No. of Elements in the Array : ";
        cin >> n;
        vector<int> nums(n);
        cout << "Enter the Elements in the Array : ";
        for (int j = 0; j < n; j++)
        {
            cin >> nums[j];
        }

        Optimal_Leaders(nums);
        for (int j = 0; j < n; j++)
        {
            cout << nums[j] << " ";
        }
        cout << endl;
    }
}