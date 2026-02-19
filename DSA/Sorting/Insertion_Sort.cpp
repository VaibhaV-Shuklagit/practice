#include <bits/stdc++.h>
using namespace std;
void insertion_sort(vector<int> &a)
{
    int n = a.size();
    for (int i = 1; i < n; i++)
    {
        int j = i;
        while (j >= 1 && a[j - 1] > a[j])
        {
            swap(a[j - 1], a[j]);
            j--;
        }
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
        cout << "The Size of Array = ";
        cin >> n;
        vector<int> a(n);
        cout << "The Elements of Array are : ";
        for (int j = 0; j < n; j++)
        {
            cin >> a[j];
        }
        insertion_sort(a);
        cout << "Sorted Array is : ";
        for (int j = 0; j < n; j++)
        {
            cout << a[j] << " ";
        }
        cout << endl;
    }
}