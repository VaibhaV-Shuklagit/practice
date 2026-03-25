#include <bits/stdc++.h>
using namespace std;
void Winner(long long p, long long q)
{
     while (true) {
        if ((double)p / q == (2.0 / 3.0)) {
            cout << "Bob" << endl;
            break; 
        }
        p = p - 1; 
        if ((long double)p / q > 1.0) {
            cout << "alice" << endl;
            break; 
        }
        if (p <= 0 || q <= 1) {
            cout << "alice" << endl;
            break;
        }

        q = q - 1; 
    }
}
int main()
{
    long t;
    cout << "Enter the Test Cases : ";
    cin >> t;
    while (t--)
    {
        long long p;
        cout << "Enter the First Number : ";
        cin >> p;
        long long q;
        cout << "Enter the Second Number : ";
        cin >> q;
        Winner(p, q);
    }
    return 0;
}