#include <bits/stdc++.h>
using namespace std;
void Product_Integers(int arr[], int n)
{
    bool flag2 = false;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 67)
        {
            flag2 = true;
            break;
        }
    }

    if (flag2 == true)
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
        Product_Integers(arr, n);
    }
    return 0;
}