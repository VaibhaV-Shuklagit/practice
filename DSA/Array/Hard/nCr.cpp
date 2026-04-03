#include <bits/stdc++.h>
using namespace std;
long long Generate_nCr(int n, int r) // better use long long [preventing Int overflow]
{
    long long res = 1;
    for (int i = 0; i < r; i++)
    {
        res = res * (n - i);
        res = res / (i + 1);
    }
    return res; // TC --> O(N) && SC --> O(1)
} // its like a trick to find nCr in the shorter terms
// like we dont have to genrate factorials then dividing them to get our result
// we can just do this through some observations, looking into how a nCr is wriiten
int main()
{
    int t;
    cout << "No. of Test Cases : ";
    cin >> t;
    while (t--)
    {
        int n;
        cout << "Enter the Number : ";
        cin >> n;
        int r;
        cout << "Enter the Number : " ;
        cin >> r;
        cout << Generate_nCr(n, r);
    }
}
// if we are asked to find the element rom rth column of Nth row in the pascal trinagle 
// we can just use this approach but we have to remember this that we have pass (n-1,r-1) 
// in order to find that element