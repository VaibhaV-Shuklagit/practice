#include <bits/stdc++.h>
using namespace std;
void print(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        for (int j = 1; j <= 2 * (n - i); j++)
        {
            cout << " ";
        }
        for (int j = 0; j < i; j++)
        {
            cout << i - j;
        }
        cout << endl;
    }
}
int main()
{
    int t;
    cout << "Enter the Number of Test Cases: ";
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        print(n);
    }
    return 0;
}