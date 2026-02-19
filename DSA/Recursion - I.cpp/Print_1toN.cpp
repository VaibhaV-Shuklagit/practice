#include <bits/stdc++.h>
using namespace std;
void Print(int i, int n)
{
    if (i > n)
        return;
    cout << i << " ";
    Print(i + 1, n);
}
int main()
{
    int t;
    cout << "Test Cases : ";
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int x;
        cout << "Enter the Number : ";
        cin >> x;
        Print(1, x);
        cout << endl;
    }
    return 0;
}