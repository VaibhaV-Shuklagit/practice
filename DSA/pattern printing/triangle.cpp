#include <bits/stdc++.h>
using namespace std;
void triangle(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
int main()
{
    int t;
    cout << "No of Test Cases : ";
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        triangle(n);
    }
    return 0;
}
