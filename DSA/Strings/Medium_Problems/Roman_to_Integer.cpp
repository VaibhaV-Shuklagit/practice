#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int romanToInt(string s)
    {
        int res = 0;

        // Map of Roman numerals to their integer values
        unordered_map<char, int> roman = {
            {'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};

        // Iterate through the string, except the last character
        for (int i = 0; i < s.size() - 1; i++)
        {
            // Subtract if current numeral is less than the next
            if (roman[s[i]] < roman[s[i + 1]])
            {
                res -= roman[s[i]];
            }
            else
            {
                // Otherwise, add the current value
                res += roman[s[i]];
            }
        }

        // Add the value of the last character
        return res + roman[s.back()];
    } // TC --> O(N)
    // SC --> O(1)
};

int main()
{
    Solution sol;
    string s = "MCMXCIV";
    int result = sol.romanToInt(s);

    cout << "Integer value: " << result << endl;

    return 0;
}