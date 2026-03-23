#include <bits/stdc++.h>
using namespace std;
void BF_Rearrange(vector<int> &arr)
{
    vector<int> pos;
    vector<int> neg;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] > 0)
        {
            pos.push_back(arr[i]);
        }
        else
        {
            neg.push_back(arr[i]);
        }
    }
    for (int i = 0; i < arr.size() / 2; i++)
    {
        if (i % 2 == 0)
        {
            arr[2 * i] = pos[i];
        }
        else
        {
            arr[2 * i + 1] = neg[i];
        }
    }
    return arr;
} // TC -->  O(N) + O(N/2) && Extra Space --> O(N)
vector<int> Optimal_Rearrange(vector<int> &arr)
{
    int n = arr.size();
    vector<int> ans(n, 0);
    int posIndex = 0, negIndex = 1;
    for (int i = 0; i < n; i++)
    {
        if (nums[i] < 0)
        {
            ans[negIndex] = nums[i];
            negIndex += 2;
        }
        else
        {
            ans[posIndex] = nums[i];
            posIndex += 2;
        }
    }
    return ans;
} // TC --> O(N) && SC --> O(N)
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
        BF_Rearrange(nums);
        for (int j = 0; j < n; j++)
        {
            cout << nums[j] << " ";
        }
        Optimal_Rearrange(nums);
        for (int j = 0; j < n; j++)
        {
            cout << nums[j] << " ";
        }
    }
}