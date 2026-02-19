#include <bits/stdc++.h>
using namespace std;
void hashing(vector<int> &a)
{
    unordered_map<int, int> hash;
    for (int i = 0; i < a.size(); i++)
    {
        hash[a[i]]++;
    }
    for (auto it : hash)
    {
        cout << it.first << " -> " << it.second << endl;
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
        cout << "The Frequency of Elements in Array is : " << endl;
        hashing(a);
    }
return 0;
}