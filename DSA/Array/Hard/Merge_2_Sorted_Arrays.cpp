#include <bits/stdc++.h>
using namespace std;
void BF_Merge_Arrays(vector<int> &nums1, vector<int> &nums2)
{
    int n = nums1.size();
    int m = nums2.size();
    vector<int> nums3(n + m);
    int left = 0;
    int right = 0;
    int idx = 0;
    while (left < n && right < m)
    {
        if (nums1[left] <= nums2[right])
        {
            nums3[idx] = nums1[left];
            left++, idx++;
        }
        else
        {
            nums3[idx] = nums2[right];
            right++, idx++;
        }
    }
    while (left < n)
    {
        nums3[idx++] = nums1[left++];
    }
    while (right < m)
    {
        nums3[idx++] = nums2[right++];
    }
    for (int i = 0; i < n + m; i++)
    {
        if (i < n)
            nums1[i] = nums3[i];
        else
            nums2[i - n] = nums3[i];
    }
} // TC --> O(n + m) + O(n + m)
// SC --> O(n + m)
void Optimal1_Merge_Arrays(vector<int> &nums1, vector<int> &nums2)
{
    int n = nums1.size();
    int m = nums2.size();
    int left = n - 1;
    int right = 0;
    while (left >= 0 && right < m)
    {
        if (nums1[left] > nums2[right])
        {
            swap(nums1[left], nums2[right]);
            left--, right++;
        }
        else
            break;
    }
    sort(nums1.begin(), nums1.end());
    sort(nums2.begin(), nums2.end());
} // TC --> O(min.(n, m)) + O(nLogn) + O(mLogm)
// SC --> O(1)
void swaPIfGreater(vector<int> &nums1, vector<int> &nums2, int ind1, int ind2)
{
    if (nums1[ind1] > nums2[ind2])
    {
        swap(nums1[ind1], nums2[ind2]);
    }
}
void Optimal2_Merge_Arrays(vector<int> &nums1, vector<int> &nums2)
{
    int n = nums1.size();
    int m = nums2.size();
    int len = n + m;
    int gap = ((len / 2) + (len % 2)); // Method for finding Cieling of a divison [[m/n]+[m%n]
    while (gap > 0)
    {
        int left = 0;
        int right = left + gap;
        while (right < len)
        {
            // nums1 and nums2
            if (left < n && right >= n)
            {
                swaPIfGreater(nums1, nums2, left, right - n);
            }
            // nums2 and nusm2
            else if (left >= n)
            {
                swaPIfGreater(nums1, nums2, left - n, right - n);
            }
            // nums1 and nums1
            else
            {
                swaPIfGreater(nums1, nums1, left, right);
            }
            left++;
            right++;
        }
        if (gap == 1)
            break;
        gap = ((gap / 2) + (gap % 2));
    }
} // We use Gap Method in this Algo which is 
// TC --> O(Log2(n + m) x O(n + m))
// SC --> O(1)
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
        vector<int> nums1(n);
        cout << "Enter the Elements in the first Array : ";
        for (int i = 0; i < nums1.size(); i++)
        {
            cin >> nums1[i];
        }
        int m;
        cout << "Enter the No. of Elements in Second Array : ";
        cin >> m;
        vector<int> nums2(m);
        cout << "Enter the Elements in the Second Array : ";
        for (int i = 0; i < nums2.size(); i++)
        {
            cin >> nums2[i];
        }
        BF_Merge_Arrays(nums1, nums2);
        for (int i = 0; i < nums1.size(); i++)
        {
            cout << nums1[i] << " ";
        }
        cout << endl;
        for (int i = 0; i < nums2.size(); i++)
        {
            cout << nums2[i] << " ";
        }
    }
}
// Test Case: nums1 = {1 3 5 7} nums2 ={0 2 6 8 9}
// Output: 0 1 2 3 
//         5 6 7 8 9