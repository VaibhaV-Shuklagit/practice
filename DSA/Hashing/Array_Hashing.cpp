#include <bits/stdc++.h>
using namespace std;
int largestElement(vector<int> &a)
{
    int largest = a[0];
    for (int i = 1; i < a.size(); i++)
    {
        if (a[i] > largest)
        {
            largest = a[i];
        }
    }
    return largest;
}
vector<int> hashing(vector<int> &a)
{
    vector<int> hash(largestElement(a) + 1, 0);
    for (int i = 0; i < a.size(); i++)
    {
        hash[a[i]]++;
    }
    return hash;
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
        vector<int> hash = hashing(a);
        cout << "The Hashing of Array is : " << endl;
        for (int j = 0; j < hash.size(); j++)
        {
            if (hash[j] > 0)
            {
                cout << j << " -> " << hash[j] << endl;
            }
        }
    }
    return 0;
}