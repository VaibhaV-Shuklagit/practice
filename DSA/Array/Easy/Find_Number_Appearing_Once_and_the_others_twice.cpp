#include <bits/stdc++.h>
using namespace std;
int BF_Finding_Element(vector<int> &arr)
{
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        int num = arr[i];
        int cnt = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[j] == num)
            {
                cnt++;
            }
        }
        if (cnt == 1)
        {
            return num;
        }
    }
    return -1;
}
int Better_Finding_Element(vector<int> &arr)
{
    unordered_map<long long, int> mpp; // Better than Array Hashing as It can have negative elements and No Size Constraints
    for (int i = 0; i < arr.size(); i++)
    {
        mpp[arr[i]]++;
    } // TC --> Avg --> O(N) & Worst --> O(N2)
    for (auto it : mpp)
    {
        if (it.second == 1)
        {
            return it.first;
        }
    } // TC --> O(M) M --> Size of Array
    return -1;
} // Total TC--> O(N) + O(M) && SC --> O(M)
int Optimal_Finding_Element(vector<int> &arr)
{
    int n = arr.size();
    int xor_sum = 0; // (n^n = 0)
    for (int i = 0; i < n; i++)
    {
        xor_sum ^= arr[i];
    }
    return xor_sum;
} // TC --> O(N)
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
        cout << "Missing Element (Brute Force): " << BF_Finding_Element(nums) << endl;
        cout << "Missing Element (Better): " << Better_Finding_Element(nums) << endl;
         cout << "Missing Element (Optimal XOR): " << Optimal_Finding_Element(nums) << endl;
    }
}