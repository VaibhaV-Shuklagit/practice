#include <bits/stdc++.h>
using namespace std;
int BF_secondLargest(int arr[], int n)
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
int Optimal_secondLargest(int arr[], int n)
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
        if (Optimal_secondLargest(arr,n) != -1)
        {
            cout << "Second Largest Element in the Array is : " << Optimal_secondLargest(arr,n) << endl;
        }
        else
        {
            cout << "There is no Second Largest Element in the Array." << endl;
        }
    }
}