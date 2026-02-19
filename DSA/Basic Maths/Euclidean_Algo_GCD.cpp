#include <bits/stdc++.h>
using namespace std;
int GCD(int a, int b)
{
    int x = min(a, b);
    int y = max(a, b);
    while (x > 0 && y > 0)
    {
        if (y > x)
            y = y % x;
        else
            x = x % y;
   }
   if(x == 0) return y ;
   if(y == 0) return x ;
}
int main()
{
    int t;
    cout << "Test Cases : ";
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        int a;
        int b;
        cout << "The Values of a and b = ";
        cin >> a >> b;
        cout << "The Value of GCD or HCF of " << a << " and " << b << " is " << GCD(a, b) << endl;
    }
    return 0;
}
