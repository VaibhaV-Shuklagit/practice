#include <bits/stdc++.h>
using namespace std;
int BF_Missing_Element(vector<int> &nums)
{
    int n = nums.size();
    for (int i = 1; i <= n + 1; i++)
    {
        bool found = false;
        for (int j = 0; j < n; j++)
        {
            if (nums[j] == i)
            {
                found = true;
                break;
            }
        }
        if (!found)
        {
            return i;
        }
    }
    return -1; 
}
int Optimal_Missing_Element(vector<int> &nums)
{
    int n = nums.size();
    int sum = (n + 1) * (n + 2) / 2;
    int actual_sum = 0;
    for (int i = 0; i < n; i++)
    {
        actual_sum += nums[i];
    }
    return sum - actual_sum;
}
int Optimal_Missing_Element_XOR(vector<int> &nums)
{
    int n = nums.size();
    int xor_sum = 0;
    for (int i = 1; i <= n + 1; i++)
    {
        xor_sum ^= i;
    }
    for (int i = 0; i < n; i++)
    {
        xor_sum ^= nums[i];
    }
    return xor_sum;
}
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
        cout << "Missing Element (Brute Force): " << BF_Missing_Element(nums) << endl;
        cout << "Missing Element (Optimal): " << Optimal_Missing_Element(nums) << endl;
        cout << "Missing Element (Optimal XOR): " << Optimal_Missing_Element_XOR(nums) << endl;
    }
}