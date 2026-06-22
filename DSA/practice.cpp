#include<bits/stdc++.h>
using namespace std;

int MainakandArray(vector<int> &nums, int n)
{
    int largest = *max_element(nums.begin(),nums.end());
    int smallest = *min_element(nums.begin(),nums.end());
    if(nums[n - 1] == largest) return largest - smallest;
    else if(nums[0] == smallest) return largest - smallest;
    else{
        int maxdiff = INT_MIN;
        for(int i = 0; i < n - 1; i++)
        {
            maxdiff = max((nums[i] - nums[i + 1]),maxdiff);
        }
        return maxdiff;
    }
}

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
        vector<int> nums(n);
        for(int i = 0; i < n; i++) cin >> nums[i];
        cout << MainakandArray(nums, n) << "\n";
    }
}