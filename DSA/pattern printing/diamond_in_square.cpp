#include <bits/stdc++.h>
using namespace std;
void print(int n)
{
    int breakpoint = n;
    int spaces = 0;
    int spaces1 = 2 * n - 2;
    for (int i = 1; i <= 2 * n; i++)
    {
        if (i <= breakpoint)
        {
            for (int j = n; j >= i; j--)
            {
                cout << "* ";
            }
            for (int j = 1; j <= spaces; j++)
            {
                cout << "  ";
            }
            for (int j = n; j >= i; j--)
            {
                cout << "* ";
            }
            spaces+=2 ;
        }
        else
        {
            for (int j = 1; j <= i - n; j++)
            {
                cout << "* ";
            }
            for (int j = 1; j <= spaces1; j++)
            {
                cout << "  ";
            }
            for (int j = 1; j <= i - n; j++)
            {
                cout << "* ";
            }
            spaces1 -= 2;
            
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