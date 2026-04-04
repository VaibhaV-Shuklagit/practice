#include <bits/stdc++.h>
using namespace std;
int optimal(vector<int> &nums)
{
    int cnt = 0;
    int el;
    for (int i = 0; i < nums.size(); i++)
    {
        if (cnt == 0)
            el = nums[i];
        if (nums[i] == el)
            cnt++;
        else
            cnt--;
    }
    return el;
}
int main()
{
    int t;
    cout << "Enter the Test Cases : ";
    cin >> t;
    while (t--)
    {
        int n;
        cout << "Enter the No. of Elements : ";
        cin >> n;
        vector<int> nums(n);
        cout << "Enter the Elements in the Array : ";
        for (int i = 0; i < nums.size(); i++)
        {
            cin >> nums[i];
        }
        cout << "The Majority Element in the Array is " << optimal(nums) << endl;
    }
}