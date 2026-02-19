#include <bits/stdc++.h>
using namespace std;
bool isSorted(int arr[], int n)
{
    for (int i = 1; i < n ; i++)
    {
        if (arr[i] < arr[i - 1])
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int t;
    cout << "Test cases: ";
    cin >> t;
    while (t--)
    {
        int n;
        cout << "Enter size of array: ";
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        if (isSorted(arr, n))
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
    }
        return 0;
    }
}