#include <bits/stdc++.h>
using namespace std;
void RevArray(vector<int>& a)
{   
    int low = 0 ;
    int high = a.size() - 1 ;
    while(low < high)
    {
        swap(a[low],a[high]) ;
        low++ ;
        high-- ;
    }
}
int main()
{
    int t;
    cout << "Test Cases : ";
    cin >> t;   
    for (int i = 1; i <= t; i++)
    {
        int n;
        cout << "The Size of Array = ";
        cin >> n ;
        vector<int>a(n) ;
        cout << "The Elements of Array are : " ;
        for(int i = 0 ; i < n ; i++)
        {
            cin >> a[i] ;
        }
        RevArray(a) ;
        cout << "The Reversed Array is : " ;
        for(int i = 0 ; i < n ; i++)
        {
            cout << a[i] << " " ;
        }
        cout << endl ;
    }
    return 0;
}
