#include<bits/stdc++.h>
using namespace std;
void Prime(int x){
    bool flag = true ;
    for(int i = 2; i*i <= x ; i++){
        if(x % i ==0 ){
            flag = false;
            break ;
        }
    }
    if(flag == true) {
        cout << "The Given Number is a Prime Number" << endl;
    }
    else cout << "The Given Number is Not a Prime Number" << endl  ;
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
        Prime(x);
    }
    return 0 ;
}