#include <bits/stdc++.h>
using namespace std;
void Better_Sort_Array(vector<int> &arr)
{
    int cnt0 = 0, cnt1 = 0, cnt2 = 0;
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
            cnt0++;
        else if (arr[i] == 1)
            cnt1++;
        else
            cnt2++;
    }
    int i = 0;
    while (cnt0--)
        arr[i++] = 0;
    while (cnt1--)
        arr[i++] = 1;
    while (cnt2--)
        arr[i++] = 2;
    return;
} // TC -->  O(2N) && Extra Space -->   O(1)
vector<int> Optimal_Sort_Array(vector<int> &arr)
{
    int n = arr.size();
    // Things to Remember in Dutch National Flag Algo
    // [0,low-1] --> 0
    // [low,mid-1] --> 1
    //[high + 1,n-1] --> 2
    // [mid,high - 1] --> Unsorted mixed order of 0,1 & 2
    int low = 0, mid = 0, high = n - 1;
    while (mid <= high)
    {
        if (arr[mid] == 0)
        {
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        }
        else if (arr[mid] == 1)
        {
            mid++;
        }
        else
        {
            swap(arr[mid], arr[high]);
            high--;
        }
    }
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
        Better_Sort_Array(nums);
        for (int j = 0; j < n; j++)
        {
            cout << nums[j] << " ";
        }
        Optimal_Sort_Array(nums);
        for (int j = 0; j < n; j++)
        {
            cout << nums[j] << " ";
        }
        // For BF approach we can use anyone of the recursive sorting algo
    }
}