#include<bits/stdc++.h>
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
void Armstrong(int a){
    int x = a;
    int cnt = CountDigits(a);
    int Num  = 0 ;
    while(a > 0){
        int ld =  a % 10;
        Num = Num + round(pow(ld,cnt)) ;
        a = a / 10 ;
    }
    if(Num == x) cout << "The Number is an Armstrong Number" << endl;
    else cout << "The Number is Not an Armstrong Number" << endl;
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
        Armstrong(x);
    }
    return 0 ;
}