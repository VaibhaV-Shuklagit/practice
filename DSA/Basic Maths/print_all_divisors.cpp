#include<bits/stdc++.h>
using namespace std;
void Divisors(int x){
    vector<int>v;
    for(int i = 1 ; i <= sqrt(x) ; i++)
    {
        if(x % i == 0)
        {
            v.push_back(i);
            if((x/i)!=i) v.push_back(x/i);
        }
    }
    sort(v.begin(),v.end());
    for(auto it : v)
    {
        cout << it << " " ;
    }
    cout << endl ;
}
int main()
{
    int t ;
    cout << "Test Cases : " ;
    cin >> t ; 
    for(int i = 0 ; i < t ; i++){
        int x;
        cout << "Enter the Number : "; 
        cin >> x ;
        Divisors(x);
    }
    return 0 ;
}