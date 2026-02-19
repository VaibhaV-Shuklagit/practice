#include <bits/stdc++.h>
using namespace std;
int removeDuplicates(vector<int> &nums)
{
    set<int> st;
    for (int i = 0; i < nums.size(); i++)
    {
        st.insert(nums[i]);
    }
    int i = 0;
    for (auto it : st)
    {
        nums[i] = it;
        i++;
    }
    return st.size();
}
int main()
{
    int t;
    cout << "Test Cases: ";
    cin >> t;
    while (t--)
    {
        int n;
        cout << "Size of Array: ";
        cin >> n;
        vector<int> nums(n);
        cout << "Elements of Array: ";
        for (int i = 0; i < n; i++)
        {
            cin >> nums[i];
        }
        int size = removeDuplicates(nums);
        cout << "Array after removing duplicates: ";
        for (int i = 0; i < size; i++)
        {
            cout << nums[i] << " ";
        }
        cout << endl;
    }
    return 0;
}