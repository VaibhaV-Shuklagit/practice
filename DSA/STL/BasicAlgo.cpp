#include <bits/stdc++.h>
using namespace std;
bool comp(pair<int, int> p1, pair<int, int> p2)
{
    if (p1.first > p2.first)
        return false;
    else
        return true;
    if (p1.first == p2.first)
    {
        if (p1.second < p2.second)
            return true;
        else
            return false;
    }
}
void BasicAlgo()
{
    int a[5] = {1, 2, 7, 98, 6};
    auto it = &a[0];
    sort(a, a + 5); // this will sort the array
    for (int i = 0; i < 5; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    sort(a, a + 5, greater<int>()); // will sort the array in the descending order
    for (int i = 0; i < 5; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    pair<int, int> arr[] = {{1, 5}, {5, 6}, {3, 4}};
    sort(arr, arr + 3, comp); // self written comparator
    for (int i = 0; i < 3; i++)
    {
        cout << "{" << arr[i].first << "," << arr[i].second << "}" << " ";
    }
    cout << endl ;
    string s = "123" ; 
    do{
        cout << s << endl ;
    }while (next_permutation(s.begin(),s.end()));
    
    int maxi = *max_element(a,a+5); // to retrieve max element from the array
}
int main()
{
    BasicAlgo();
    return 0;
}