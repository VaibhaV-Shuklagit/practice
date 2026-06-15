#include <bits/stdc++.h>
using namespace std;

int countStudents(vector<int> &nums, int pages)
{
    int students = 1;
    long long pageStudent = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (pageStudent + nums[i] <= pages)
            pageStudent += nums[i];
        else
        {
            students++;
            pageStudent = nums[i];
        }
    }
    return students;
}

int findPages(vector<int> &nums, int n, int m)
{
    if (m > n)
        return -1;
    int low = *max_element(nums.begin(), nums.end());
    int high = accumulate(nums.begin(), nums.end(), 0);
    while (low <= high)
    {
        int mid = (low + high) / 2;
        int students = countStudents(nums, mid);
        if (students > m)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return low;
} // TC --> O(Nlog(sum - max + 1))
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int m;
        cin >> m;
        vector<int> nums(n);
        for (int i = 0; i < n; i++)
            cin >> nums[i];
        cout << (nums, n, m) << endl;
    }
}

// Similar Questions : Painter's Partition, Split Array - largest Sum