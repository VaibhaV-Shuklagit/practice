#include <bits/stdc++.h>
using namespace std;
int BF_Majority_Element(vector<int> arr)
{
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        int cnt = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                cnt++;
            }
        }
        if (cnt > n / 2)
            return arr[i];
    }
} // TC --> O(N2)
int Better_Majority_Element(vector<int> arr)
{
    map<int, int> mpp;
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        mpp[arr[i]]++;
    }
    for (auto it : mpp)
    {
        if (it.second > (arr.size() / 2))
        {
            return it.first;
        }
    }
    return -1;
} // O(NlogN) + O(N) --> Ordered Map && (O(N) or O(N2)) + O(N) --> Unordered Map
// SC --> O(N)
int Optimal_Majority_Element(vector<int> arr)
{
    int n = arr.size();
    int el ;
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {   
        if (cnt == 0)
        {
            cnt = 1;
            el = arr[i];
        }
        else if(arr[i] = el)
            cnt++;
        else
            cnt--;
    }
    return el;
} // Moore's Voting Algo
// TC --> O(N)
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
        cout << "Majority Element is : " << BF_Majority_Element(nums) << endl;
        cout << "Majority Element is : " << Better_Majority_Element(nums) << endl;
        cout << "Majority Element is : " << Optimal_Majority_Element(nums) << endl;
    }
}