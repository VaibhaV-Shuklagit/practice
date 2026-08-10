#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string expand(int i, int j, string s)
    {
        int left = i;
        int right = j;

        while (left >= 0 && right < s.size() && s[left] == s[right]) // expand the substring until it becomes non palindromic
        {
            left--;
            right++;
        }

        return s.substr(left + 1, right - left - 1); // return the length of the palindrome
    }

    string longestPalindrome(string s)
    {
        string ans = "";

        for (int i = 0; i < s.size(); i++)
        {
            string odd = expand(i, i, s); // create palindromes around single centres
            if (odd.size() > ans.size())
            {
                ans = odd; // store the palindrome if it's length is greater than previous one
            }
            string even = expand(i, i + 1, s); // create palindromes around two centres
            if (even.size() > ans.size())
            {
                ans = even; // store the palindrome if it's length is greater than previous one
            }
        }

        return ans;
    } // TC --> O(N^2)
    // SC --> O(1)
};
int main()
{
    Solution sol;
    string s = "ababad";
    cout << sol.longestPalindrome(s) << "\n";
    return 0;
}