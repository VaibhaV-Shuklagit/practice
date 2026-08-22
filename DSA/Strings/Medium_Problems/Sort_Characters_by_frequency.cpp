#include<bits/stdc++.h>
using namespace std;

class Solution {
private:
    // Custom comparator: sort by frequency descending, then by character ascending
    static bool comparator(pair<int, char> p1, pair<int, char> p2) {
        if (p1.first > p2.first) return true;
        if (p1.first < p2.first) return false;
        return p1.second < p2.second;
    }

public:
    vector<char> frequencySort(string& s) {
        // Array to store frequency and character
        pair<int, char> freq[26];
        
        // Initialize frequency array with character labels
        for (int i = 0; i < 26; i++) {
            freq[i] = {0, i + 'a'};
        }

        // Count frequency of each character in string
        for (char ch : s) {
            freq[ch - 'a'].first++;
        }

        // Sort the frequency array using the custom comparator
        sort(freq, freq + 26, comparator);

        // Store characters with non-zero frequency
        vector<char> ans;
        for (int i = 0; i < 26; i++) {
            if (freq[i].first > 0) ans.push_back(freq[i].second);
        }

        // Return the result
        return ans;
    }
};

int main() {
    Solution sol;
    
    string s = "tree";

    vector<char> result = sol.frequencySort(s);

    for (char c : result) {
        cout << c << " ";
    }

    return 0;
}
