#include <bits/stdc++.h>
using namespace std;
int reverse(int a)
{   
    int revNum  = 0 ;
    while(a > 0){
        int ld =  a % 10;
        revNum = (revNum*10) + ld ;
        a = a / 10 ;
    }
    return revNum ;
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
        cin >> a ;
        cout << "The Reverse of a is " << reverse(a) << endl;
    }
    return 0;
}
