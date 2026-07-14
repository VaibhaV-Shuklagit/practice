#include<bits/stdc++.h>
using namespace std;

int candy_BF(vector<int>& ratings) {
        // Total number of children
        int n = ratings.size();
        
        // Array to keep track of candies given to each child, initialized to 1
        vector<int> candies(n, 1);
        
        // Boolean flag to track if we made any change in the current iteration
        bool updated = true;

        // Repeat until no changes are made in a full scan
        while (updated) {
            updated = false;

            // Left to right pass to check increasing rating condition
            for (int i = 1; i < n; ++i) {
                if (ratings[i] > ratings[i - 1] && candies[i] <= candies[i - 1]) {
                    candies[i] = candies[i - 1] + 1;
                    updated = true;
                }
            }

            // Right to left pass to check decreasing rating condition
            for (int i = n - 2; i >= 0; --i) {
                if (ratings[i] > ratings[i + 1] && candies[i] <= candies[i + 1]) {
                    candies[i] = candies[i + 1] + 1;
                    updated = true;
                }
            }
        }

        // Return the total candies by summing the array
        return accumulate(candies.begin(), candies.end(), 0);
    }

    int candy_Better(vector<int>& ratings) {
        // Initialize each child with 1 candy
        int n = ratings.size();
        vector<int> candies(n, 1);

        // Traverse from left to right
        for (int i = 1; i < n; ++i) {
            // If current rating is higher than previous, give more candies
            if (ratings[i] > ratings[i - 1])
                candies[i] = candies[i - 1] + 1;
        }

        // Traverse from right to left
        for (int i = n - 2; i >= 0; --i) {
            // If current rating is higher than next, adjust candy count
            if (ratings[i] > ratings[i + 1])
                candies[i] = max(candies[i], candies[i + 1] + 1);
        }

        // Sum up all candies
        return accumulate(candies.begin(), candies.end(), 0);
    }

 int candy_Optimal(vector<int>& ratings) {

        // Get number of children
        int n = ratings.size();

        // Initially give 1 candy to each child
        int candies = n;

        // Start from second child
        int i = 1;

        while (i < n) {

            // Skip equal ratings, no need to change candy count
            if (ratings[i] == ratings[i - 1]) {
                i++;
                continue;
            }

            // Initialize increasing slope counter
            int peak = 0;

            // Traverse strictly increasing ratings
            while (i < n && ratings[i] > ratings[i - 1]) {
                peak++;
                candies += peak;
                i++;
            }

            // Initialize decreasing slope counter
            int valley = 0;

            // Traverse strictly decreasing ratings
            while (i < n && ratings[i] < ratings[i - 1]) {
                valley++;
                candies += valley;
                i++;
            }

            // Remove extra candy given to peak (overlap of increasing and decreasing)
            candies -= min(peak, valley);
        }

        return candies;
    }

int main() {

    vector<int> ratings = {1, 3, 6, 8, 9, 5, 3};
    cout << candy_BF(ratings) << endl;
    cout << candy_Better(ratings) << endl;
    cout << candy_Optimal(ratings) << endl;
    return 0;
}