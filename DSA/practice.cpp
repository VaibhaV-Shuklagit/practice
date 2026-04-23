#include<bits/stdc++.h>
using namespace std;
int main()
{
 vector<int> nums = {4,5,6,7,8,9};
 cout << lower_bound(nums.begin(),nums.end(),11) - nums.begin();
}