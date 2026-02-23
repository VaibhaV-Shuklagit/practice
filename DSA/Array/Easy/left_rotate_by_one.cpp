#include<bits/stdc++.h>
using namespace std;
void leftRotateByOne(vector<int> &arr)
{
    int temp = arr[0];
    for (int i = 1; i < arr.size(); i++)
    {
        arr[i - 1] = arr[i];
    }
    arr[arr.size() - 1] = temp;
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
        leftRotateByOne(arr);
        cout << "Array after Left Rotation by One: ";
        for (int i = 0; i < arr.size(); i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    return 0;
}