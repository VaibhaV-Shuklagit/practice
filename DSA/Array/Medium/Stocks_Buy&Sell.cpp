#include <bits/stdc++.h>
using namespace std;
int Maximum_Profit(vector<int> arr)
{
    int minPrice = arr[0];
    int maxProfit = 0;
    int n = arr.size();
    for (int i = 1; i < n; i++)
    {
        int cost = prices[i] - minPrice;
        maxProfit = max(maxProfit, cost);
        minPrice = min(minPrice, arr[i]);
    }
    return maxProfit;
} // Dynamic Programming
// TC --> o(n)
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
        cout << "Maximum profit made : " << Maximum_Profit(nums) << endl;
    }
}