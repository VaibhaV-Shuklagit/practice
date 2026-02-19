#include <bits/stdc++.h>
using namespace std;
int Sum(int a)
{
    if (a == 1)
    {
        return 1;
    }
    return a + Sum(a - 1);
}
int main()
{
    int t;
    cout << "Test Cases : ";
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        int a;
        cout << "The Values of a = ";
        cin >> a;
        cout << "The Sum of N natural numbers is " << Sum(a) << endl;
    }
    return 0;
}
