#include <bits/stdc++.h>
using namespace std;

    string longestCommonPrefix(vector<string>& str) {
        // Handle the case where input is empty
        if (str.empty()) return "";

        // Sort the strings lexicographically
        sort(str.begin(), str.end());

        // First string in sorted order
        string first = str[0];

        // Last string in sorted order
        string last = str[str.size() - 1];

        // To store the common prefix
        string ans = "";

        // Compare up to the length of the shorter string
        int minLength = min(first.size(), last.size());

        // Compare characters of first and last string
        for (int i = 0; i < minLength; i++) {
            // Stop if characters differ
            if (first[i] != last[i]) break;

            // Add matching character to answer
            ans += first[i];
        }

        return ans;
    }

int main() {
    vector<string> input = {"interview", "internet", "internal", "interval"};

    string result = longestCommonPrefix(input);

    cout << "Longest Common Prefix: " << result << endl; 

    return 0;
}