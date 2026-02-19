#include <bits/stdc++.h>
using namespace std;
int largestElement(int arr[], int n)
{
   sort(arr, arr + n);
    return arr[n - 1]; 
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
        int largest = arr[0];
        for (int i = 1; i < n; i++)
        {
            if (arr[i] > largest)
            {
                largest = arr[i];
            }
        }
        cout << "Largest Element in the Array is : " << largest << endl;
    }
}