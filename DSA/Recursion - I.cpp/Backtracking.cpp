#include <bits/stdc++.h>
using namespace std;
void Print(int n)
{
    if (n < 1)
    return;
    Print(n -1);
    cout << n << " ";
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
        Print(x);
        cout << endl;
    }
    return 0;
}