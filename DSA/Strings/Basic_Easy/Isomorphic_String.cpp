#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // Method to check if two strings are isomorphic
    bool isomorphicString(string s, string t)
    {
        // Arrays to store last seen positions of characters in s and t
        int m1[256] = {0}, m2[256] = {0};

        // Get the length of the strings
        int n = s.size();

        // Traverse each character of the strings
        for (int i = 0; i < n; ++i)
        {
            // If previous positions of current characters differ, return false
            if (m1[s[i]] != m2[t[i]])
                return false;

            // Update the position with current index + 1
            m1[s[i]] = i + 1;
            m2[t[i]] = i + 1;
        }

        // If no mismatch is found, return true
        return true;
    }
};

int main()
{
    Solution solution;

    string s = "paper";
    string t = "title";
    if (solution.isomorphicString(s, t))
    {
        cout << "Strings are isomorphic." << endl;
    }
    else
    {
        cout << "Strings are not isomorphic." << endl;
    }

    return 0;
}