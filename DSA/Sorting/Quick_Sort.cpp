#include <bits/stdc++.h>
using namespace std;
int partition(vector<int> &arr, int low, int high)
{
    int pivot = arr[low];
    int i = low;
    int j = high;
    while (i < j)
    {
        while (arr[i] <= pivot && i < high)
        {
            i++;
        }
        while (arr[j] > pivot && j > low)
        {
            j--;
        }
        if (i < j)
        {
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[low], arr[j]);
    return j;
}
void quickSort(vector<int> &arr, int low, int high)
{
    if (low < high)
    {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
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
        vector<int> arr(n);
        cout << "Elements of Array : ";
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        quickSort(arr, 0, n - 1);
        cout << "Sorted Array : ";
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    return 0;
}