#include <bits/stdc++.h>
using namespace std;
void print(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << "  ";
        }
        int num = 65;
        for (int j = 1; j <= i; j++)
        {
            cout << char(num) << " ";
            num++;
        }
        num--;
        for (int j = 1; j <= i - 1; j++)
        {
            num--;
            cout << char(num) << " ";
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