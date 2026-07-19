#include <bits/stdc++.h>
using namespace std;

    int findPeakElement_BF(vector<int>& nums) {
        int n = nums.size();
        
        // Traverse the array
        for (int i = 0; i < n; i++) {
            // Check left neighbor if exists
            bool left = (i == 0) || (nums[i] >= nums[i - 1]);
            // Check right neighbor if exists
            bool right = (i == n - 1) || (nums[i] >= nums[i + 1]);
            
            // If both sides are valid, return index
            if (left && right) return i;
        }

        // In case no peak found (shouldn't happen)
        return -1;
    }

int findPeakElement_Optimal(vector<int>& nums) {
        // Set left and right bounds
        int low = 0, high = nums.size() - 1;

        // Binary search loop
        while (low < high) {
            // Find mid point
            int mid = (low + high) / 2;

            // If mid element is greater than next
            if (nums[mid] > nums[mid + 1]) {
                // Move to left half
                high = mid;
            } else {
                // Move to right half
                low = mid + 1;
            }
        }

        // Return peak index
        return low;
    }

int main() {
    vector<int> nums = {1, 3, 20, 4, 1, 0};
    cout << findPeakElement_BF(nums) <<"\n";
    cout << findPeakElement_Optimal(nums) <<"\n";
    return 0;
}