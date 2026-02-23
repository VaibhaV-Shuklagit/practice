#include <bits/stdc++.h>
using namespace std;
void BF_MoveZeroToEnd(vector<int> &arr)
{
    vector<int> temp(arr.size(), 0);
    int j = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] != 0)
        {
            temp[j++] = arr[i];
        }
    }
    for (int i = 0; i < arr.size(); i++)
    {
        arr[i] = temp[i];
    }
}
void Optimal_MoveZeroToEnd(vector<int> &arr)
{
    int j = -1;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == 0)
        {
            j = i;
            break;
        }
    }
    if (j == -1)
    {
        return;
    }
    for (int i = j + 1; i < arr.size(); i++)
    {
        if (arr[i] != 0)
        {
            swap(arr[i], arr[j]);
            j++;
        }
    }
}
int main()
{
    int t;
    cout << "Test Cases: ";
    cin >> t;
    while (t--)
    {
        int n;
        cout << "Enter the No. of Elements : ";
        cin >> n;
        vector<int> arr(n);
        cout << "Enter the Elements in the Array : ";
        for (int j = 0; j < n; j++)
        {
            cin >> arr[j];
        }
        BF_MoveZeroToEnd(arr);
        cout << "Array after Moving Zero to End: ";
        for (int i = 0; i < arr.size(); i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    return 0;
}