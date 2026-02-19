#include <bits/stdc++.h>
using namespace std;
int secondLargest(int arr[], int n)
{
    int largest = arr[0];
    int secondLargest = INT_MIN;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > largest)
        {
            secondLargest = largest;
            largest = arr[i];
        }
        else if (arr[i] != largest && (secondLargest == -1 || arr[i] > secondLargest))
        {
            secondLargest = arr[i];
        }
    }
    if (secondLargest == INT_MIN)
    {
        return -1;
    }
    return secondLargest;
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
}