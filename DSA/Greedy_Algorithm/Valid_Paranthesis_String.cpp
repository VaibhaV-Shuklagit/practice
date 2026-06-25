#include <bits/stdc++.h>
using namespace std;

// function to check if string is valid by trying all possibilities for '*'
    bool Brute_Force(string& s, int i, int open) {
        // If open becomes negative, the string is invalid
        if (open < 0) return false;

        // If we reach the end, check if all opens are closed
        if (i == s.length()) return open == 0;

        // If current character is '(', treat it as an opening bracket
        if (s[i] == '(') {
            return Brute_Force(s, i + 1, open + 1);
        } 
        // If current character is ')', treat it as a closing bracket
        else if (s[i] == ')') {
            return Brute_Force(s, i + 1, open - 1);
        } 
        // If character is '*', try all 3 options
        else {
              // Treat '*' as empty
              // Treat '*' as '('
              // Treat '*' as ')'
            return Brute_Force(s, i + 1, open) ||       
                   Brute_Force(s, i + 1, open + 1) ||    
                   Brute_Force(s, i + 1, open - 1);      
        }
    } // Recursive Method TC --> O(3^N)
// SC --> O(N)

bool Better(string s) {
        stack<int> openBrackets; // Stack to store indices of open brackets
        stack<int> asterisks; // Stack to store indices of asterisks

        for (int i = 0; i < s.length(); i++) {
            char ch = s[i];

            // If current character is an open bracket, push its index onto the stack
            if (ch == '(') {
                openBrackets.push(i);
                // If current character is an asterisk, push its index onto the stack
            } else if (ch == '*') {
                asterisks.push(i);
                // current character is a closing bracket ')'
            } else {
                // If there are open brackets available, use them to balance the closing bracket
                if (!openBrackets.empty()) {
                    openBrackets.pop();
                    // If no open brackets are available, use an asterisk to balance the closing bracket
                } else if (!asterisks.empty()) {
                    asterisks.pop();
                    // Unmatched ')' and no '*' to balance it.
                } else {
                    return false;
                }
            }
        }

        // Check if there are remaining open brackets and asterisks that can balance them
        while (!openBrackets.empty() && !asterisks.empty()) {
            // If an open bracket appears after an asterisk, it cannot be balanced, return false
            if (openBrackets.top() > asterisks.top()) {
                return false; // '*' before '(' which cannot be balanced.
            }
            openBrackets.pop();
            asterisks.pop();
        }

        // If all open brackets are matched and there are no unmatched open brackets left, return true
        return openBrackets.empty();
} // TC --> O(N)
// SC --> O(N)

bool Optimal(string s) { // We Just coneverted our BF Recursive method into a linear Approach using two variables 
        // Track minimum and maximum open brackets
        int minOpen = 0, maxOpen = 0;

        // Traverse each character in the string
        for (char c : s) {
            if (c == '(') {
                minOpen++;
                maxOpen++;
            } else if (c == ')') {
                minOpen--;
                maxOpen--;
            } else {
                // Treat '*' as '(', ')' or ''
                minOpen--;
                maxOpen++;
            }

            // If maxOpen goes negative, too many closing brackets
            if (maxOpen < 0) return false;

            // minOpen can't be negative
            minOpen = max(minOpen, 0);
        }

        // String is valid if all opens are closed
        return minOpen == 0;
} // TC --> O(N)
// SC --> O(1)
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {   
        cout << boolalpha;
        string s;
        cin >> s;
        cout << Brute_Force(s, 0, 0) << "\n";
        cout << Better(s) << "\n";
        cout << Optimal(s) << "\n";
    }
}