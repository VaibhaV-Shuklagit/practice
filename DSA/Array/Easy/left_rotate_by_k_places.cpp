#include <bits/stdc++.h>
using namespace std;
void BF_LeftRotateByKPlaces(vector<int> &arr, int k)
{
    k = k % arr.size();
    vector<int> temp(k);
    for (int i = 0; i < k; i++)
    {
        temp[i] = arr[i];
    } // shifting the elements to the left by k places
    for (int i = k; i < arr.size(); i++)
    {
        arr[i - k] = arr[i];
    } // copying the first k elements to the end of the array
    int j = 0 ;
    for (int i = arr.size() - k; i < arr.size(); i++)
    {
        arr[i] = temp[j++];
    } // copying the first k elements to the end of the array
}
void Better_LeftRotateByKPlaces(vector<int> &arr, int k)
{
    k = k % arr.size();
    reverse(arr.begin(), arr.begin() + k);
    reverse(arr.begin() + k, arr.end());
    reverse(arr.begin(), arr.end());
}
int main()
{
    int t;
    cout << "Test Cases: ";
    cin >> t;
    while (t--)
    {
        int n, k;
        cout << "Enter the No. of Elements : ";
        cin >> n;
        vector<int> arr(n);
        cout << "Enter the Elements in the Array : ";
        for (int j = 0; j < n; j++)
        {
            cin >> arr[j];
        }
        cout << "Enter the No. of Places to Rotate : ";
        cin >> k;
        Better_LeftRotateByKPlaces(arr, k);
        cout << "Array after Left Rotation by K Places: ";
        for (int i = 0; i < arr.size(); i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    return 0;
}