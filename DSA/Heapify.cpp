#include <bits/stdc++.h>
using namespace std;
void Heapify(int arr[], int n)
{
    bool flag = false;
    for (int i = 0; i < n / 2; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            if (arr[2 * (i+1)] < arr[i + 1])
            {       
                flag = true;
                swap(arr[2*(i+1)],arr[i+1]);
            }
            else
                flag = false;
        }
    }
    if (flag == true)
    {
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        Heapify(arr, n);
    }
}