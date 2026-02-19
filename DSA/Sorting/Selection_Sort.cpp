#include <bits/stdc++.h>
using namespace std;
void selection_sort(vector<int> &a)
{
    int n = a.size();
    for (int i = 0; i < n - 1; i++)
    {
        int min_index = i;
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] < a[min_index])
            {
                min_index = j;
            }
        }
        swap(a[i], a[min_index]);
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
        selection_sort(a);
        cout << "Sorted Array is : ";
        for (int j = 0; j < n; j++)
        {
            cout << a[j] << " ";
        }
        cout << endl;
    }
    return 0;
}