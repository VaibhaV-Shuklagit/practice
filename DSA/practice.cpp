#include <bits/stdc++.h>
using namespace std;
int avg(vector<int> nums,int high)
{   
    long long avg = 0;
    for(int i = 0; i <= high; i++)
    {
        avg+=nums[i];
    }
    return (int)avg/(high + 1);
}
void CakeLeveling(vector<int> nums,int n)
{ 
vector<int> ans;
ans.push_back(nums[0]);
int mini = nums[0];
int prevavg = nums[0]; 
for(int i = 1; i < n ;i++)
{
if(nums[i] < mini) 
{
prevavg = avg(nums,i);
ans.push_back(prevavg);
mini = nums[i];
}
else ans.push_back(prevavg);
}
for(int i = 0; i < ans.size() ;i++)
{
cout << ans[i] << " ";
}
cout << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {   
        int n;
        cin >> n;
        vector<int> nums(n);
        for(int i = 0; i < n; i++)
        {
            cin >> nums[i];
        }
        CakeLeveling(nums,n);
    }
}