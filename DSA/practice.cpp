#include <bits/stdc++.h>
using namespace std;
bool comp(vector<int> a, vector<int> b)
{
    if (a[0] > b[0])
        return false;
    else if (a[0] == b[0])
    {
        if (a[1] <= b[1])
            return true;
        else
            return false;
    }
    else
        return true;
}
void Merge_Arrays(vector<vector<int>> &matrix)
{
    sort(matrix.begin(), matrix.end(), comp);
    
}
int main()
{
    int t;
    cout << "Enter the Test Cases : ";
    cin >> t;
    while (t--)
    {
        int n;
        cout << "Enter the No. of Elements in first Array : ";
        cin >> n;
        vector<vector<int>> nums1(n, vector<int>(2));
        cout << "Enter the Elements in the matrix : ";
        for (int i = 0; i < nums1.size(); i++)
        {
            for (int j = 0; j < 2; j++)
            {
                cin >> nums1[i][j];
            }
        }
        // int m;
        // cout << "Enter the No. of Elements in Second Array : ";
        // cin >> m;
        // vector<int> nums2(m);
        // cout << "Enter the Elements in the Second Array : ";
        Merge_Arrays(nums1);
        // for (int i = 0; i < nums2.size(); i++)
        // {
        //     cin >> nums2[i];
        // }
        // Merge_Arrays(nums1,nums2);
        for (int i = 0; i < nums1.size(); i++)
        {
            for (int j = 0; j < 2; j++)
            {
                cout << nums1[i][j] << " ";
            }
        }
        cout << endl;
        // for (int i = 0; i < nums2.size(); i++)
        // {
        //     cout << nums2[i] << " ";
        // }
    }
}