#include <bits/stdc++.h>
using namespace std;
int Dice_Roll(int arr[], int n)
{
    int cnt = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] + arr[i + 1] == 7)
        {
            cnt++;
        }
        else if (arr[i] == arr[i + 1])
        {
            cnt++;
        }
    }
    return cnt;
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
        cout << Dice_Roll(arr, n) << endl;
    }
}