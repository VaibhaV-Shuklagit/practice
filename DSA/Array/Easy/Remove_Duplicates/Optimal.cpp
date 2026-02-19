#include<bits/stdc++.h>
using namespace std;
int removeDuplicates(vector<int> &nums){
    int i = 0 ;
    for(int j = 1 ; j < nums.size() ; j++){
        if(nums[i] != nums[j]){
            i++ ;
            nums[i] = nums[j] ;
        }
    }
    return i + 1 ;
}
int main(){
    int t;
    cout << "Test Cases: ";
    cin >> t;
    while (t--)
    {
        int n;
        cout << "Size of Array: ";
        cin >> n;
        vector<int> nums(n);
        cout << "Elements of Array: ";
        for (int i = 0; i < n; i++)
        {
            cin >> nums[i];
        }
        int size = removeDuplicates(nums);
        sort(nums.begin(), nums.begin() + size);
        cout << "Array after removing duplicates: ";
        for (int i = 0; i < size; i++)
        {
            cout << nums[i] << " ";
        }
        cout << endl;
    }
    return 0 ;
}