#include <bits/stdc++.h>
using namespace std;
int CountDigits(int n)
{
    int Count = 0 ;
    while (n > 0)
    {
        Count++;
        n = n / 10;
    }
    return Count;
}
int CountDigits1(int n)
{
    return (int)(log10(n) + 1);
}
int main()
{
    int t;
    cout << "Enter the No. of Test Cases = ";
    cin >> t;
    while (t > 0)
    {
        int n;
        cout << "Enter the Number = ";
        cin >> n;
        cout << CountDigits(n) << endl;
        cout << CountDigits1(n) << endl;
        t--;
    }
    return 0;
}
// TC ---> logN as here the loop is depending on no. of times N divided by 10