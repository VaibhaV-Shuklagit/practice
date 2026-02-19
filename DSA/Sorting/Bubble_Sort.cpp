#include <bits/stdc++.h>
using namespace std;
void bubble_sort(vector<int> &a)
{
    int n = a.size();
    for (int i = 0; i < n - 1; i++)
    {
        bool swapped = false;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                swap(a[j], a[j + 1]);
                swapped = true;
            }
        }
        if (swapped == false)
        {
            break;
        }
    }
}
int main()
{
    int t;
    cout << "Test Cases : ";
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        int n;
        cout << "The Size of Array = ";
        cin >> n;
        vector<int> a(n);
        cout << "The Elements of Array are : ";
        for (int j = 0; j < n; j++)
        {
            cin >> a[j];
        }
        bubble_sort(a);
        cout << "Sorted Array is : ";
        for (int j = 0; j < n; j++)
        {
            cout << a[j] << " ";
        }
        cout << endl;
    }
    return 0;
}