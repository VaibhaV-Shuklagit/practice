#include <bits/stdc++.h>
using namespace std;
void Heapify(vector<int> &arr)
{
    unordered_map<long, long> mpp;
    int i = 1;
    for (auto it : arr)
    {
        mpp[i++] = it;
    }
    bool flag = false;
    for (int j = 1; j <= arr.size(); j++)
    {
        
    }
    if (arr.size() == 1)
        cout << "YES" << endl;
    else
    {
        if (flag == true)
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        Heapify(arr);
    }
}

