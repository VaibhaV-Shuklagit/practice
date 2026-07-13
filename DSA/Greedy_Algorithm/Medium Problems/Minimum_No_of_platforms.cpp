#include <bits/stdc++.h>
using namespace std;

    int countPlatforms_BF(int n, int arr[], int dep[]) {

        // Initialize answer to 1
        int ans = 1;

        // Loop over all arrival times
        for (int i = 0; i < n; i++) {

            // Initialize count of overlapping intervals
            int count = 1;

            // Check overlap with every other train
            for (int j = i + 1; j < n; j++) {

                // Check if there is overlap between train i and j
                if ((arr[i] >= arr[j] && arr[i] <= dep[j]) ||
                    (arr[j] >= arr[i] && arr[j] <= dep[i])) {
                    count++;
                }
            }
            // Update maximum platform count
            ans = max(ans, count);
        }

        return ans;
    }
    int countPlatforms_Optimal(int n, int arr[], int dep[]) {
        // Sort the arrival and departure times
        sort(arr, arr + n);
        sort(dep, dep + n);

        // Initialize pointers and counters
        int platforms = 1;
        int result = 1;
        int i = 1, j = 0;

        // Traverse both arrays
        while (i < n && j < n) {
            // If next train arrives before current one departs
            if (arr[i] <= dep[j]) {
                // One more platform needed
                platforms++;
                i++;
            } else {
                // One train departs, platform freed
                platforms--;
                j++;
            }

            // Update maximum required platforms
            result = max(result, platforms);
        }

        return result;
    }

int main() {
    int arr[] = {900, 945, 955, 1100, 1500, 1800};
    int dep[] = {920, 1200, 1130, 1150, 1900, 2000};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout  << countPlatforms_BF(n, arr, dep) << "\n";
    cout  << countPlatforms_Optimal(n, arr, dep) << "\n";

    return 0;
}