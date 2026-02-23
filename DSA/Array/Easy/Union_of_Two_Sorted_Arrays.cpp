#include<bits/stdc++.h>
using namespace std;    
vector<int> BF_unionOfSortedArrays(vector<int> &arr1, vector<int> &arr2)
{
    vector<int> nums;
    int n1 = arr1.size();
    int n2 = arr2.size();
    set<int> st;
    for (int i = 0; i < n1; i++)
    {
        st.insert(arr1[i]);
    }
    for (int i = 0; i < n2; i++)
    {
        st.insert(arr2[i]);
    }   
    for (auto it : st)
    {
        nums.push_back(it);
    }
    return nums;
}
vector<int> Optimal_unionOfSortedArrays(vector<int> &arr1, vector<int> &arr2)
{
    vector<int> nums;
    int n1 = arr1.size();
    int n2 = arr2.size();
    int i = 0, j = 0;
    while (i < n1 && j < n2)
    {
        if (arr1[i] < arr2[j])
        {
            if (nums.empty() || nums.back() != arr1[i])
            {
                nums.push_back(arr1[i]);
            }
            i++;
        }
        else if (arr1[i] > arr2[j])
        {
            if (nums.empty() || nums.back() != arr2[j])
            {
                nums.push_back(arr2[j]);
            }
            j++;
        }
        else
        {
            if (nums.empty() || nums.back() != arr1[i])
            {
                nums.push_back(arr1[i]);
            }
            i++;
            j++;
        }
    }
    while (i < n1)
    {
        if (nums.empty() || nums.back() != arr1[i])
        {
            nums.push_back(arr1[i]);
        }
        i++;
    }
    while (j < n2)
    {
        if (nums.empty() || nums.back() != arr2[j])
        {
            nums.push_back(arr2[j]);
        }
        j++;
    }
    return nums;
}
int main()
{
    int t;
    cout << "Test Cases: ";
    cin >> t;
    while (t--)
    {
        int n1, n2;
        cout << "Enter the No. of Elements in First Array : ";
        cin >> n1;
        vector<int> arr1(n1);
        cout << "Enter the Elements in the First Array : ";
        for (int j = 0; j < n1; j++)
        {
            cin >> arr1[j];
        }
        cout << "Enter the No. of Elements in Second Array : ";
        cin >> n2;
        vector<int> arr2(n2);
        cout << "Enter the Elements in the Second Array : ";
        for (int j = 0; j < n2; j++)
        {
            cin >> arr2[j];
        }
        vector<int> result = Optimal_unionOfSortedArrays(arr1, arr2);
        cout << "Union of Two Sorted Arrays: ";
        for (int i = 0; i < result.size(); i++)
        {
            cout << result[i] << " ";
        }
        cout << endl;
    }
    return 0;
}