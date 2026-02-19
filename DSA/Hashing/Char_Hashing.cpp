#include<bits/stdc++.h>
using namespace std;
vector<int> hashing(string &s)
{
    vector<int> hash(256, 0);
    for (int i = 0; i < s.size(); i++)
    {
        hash[s[i]]++;
    }
    return hash;
}
int main()
{   int t;
    cout << "Test Cases : ";  
    cin >> t;
    while(t--){
    string s;
    cout << "Enter a string: ";
    cin >> s;
    vector<int> hash = hashing(s);
    cout << "The Hashing of String is : " << endl;
    for (int i = 0; i < hash.size(); i++)
    {
        if (hash[i] > 0)
        {
            cout << char(i) << " -> " << hash[i] << endl;
        }
    }
}
    return 0;
}