#include <bits/stdc++.h>
using namespace std;
int secondLargest(int arr[], int n)
{
    sort(arr, arr + n);
    for (int i = n - 2; i >= 0; i--)
    {
        if (arr[i] != arr[n - 1])
        {
            return arr[i];
        }
    }
    return -1;
}
int main()
{
    int t;
    cout << "Test Cases : ";
    cin >> t;
    while (t--)
    {
        int n;
        cout << "Size of Array : ";
        cin >> n;
        int arr[n];
        cout << "Elements of Array : ";
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int secondLargestElement = secondLargest(arr, n);
        if (secondLargestElement != -1)
        {
            cout << "Second Largest Element in the Array is : " << secondLargestElement << endl;
        }
        else
        {
            cout << "There is no Second Largest Element in the Array." << endl;
        }
    }
    return 0;
}