#include<bits/stdc++.h>
using namespace std;    
int linearSearch(vector<int> &arr, int key)
{
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int t;
    cout << "Test Cases: ";
    cin >> t;
    while (t--)
    {
        int n, key;
        cout << "Enter the No. of Elements : ";
        cin >> n;
        vector<int> arr(n);
        cout << "Enter the Elements in the Array : ";
        for (int j = 0; j < n; j++)
        {
            cin >> arr[j];
        }
        cout << "Enter the Key to Search : ";
        cin >> key;
        int index = linearSearch(arr, key);
        if (index != -1)
        {
            cout << "Key found at index: " << index << endl;
        }
        else
        {
            cout << "Key not found in the array." << endl;
        }
    }
    return 0;
}