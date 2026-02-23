#include <bits/stdc++.h>
using namespace std;
int BF_largestElement(int arr[], int n)
{
   sort(arr, arr + n);
    return arr[n - 1]; 
}
int Optimal_largestElement(int arr[], int n)
{
    int largest = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }
    return largest;
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
        cout << "Largest Element in the Array is : " << Optimal_largestElement(arr,n) << endl;
    }
}