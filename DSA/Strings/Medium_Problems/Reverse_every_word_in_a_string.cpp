#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Function to reverse the order of words in a string
    string reverseWords_BF(string s) {
        // Vector to store words
        vector<string> words;
        
        // Temporary string to store a single word
        string word = "";
        
        // Traverse the string character by character
        for (int i = 0; i < s.size(); i++) {
            // If the character is not a space, add it to the current word
            if (s[i] != ' ') {
                word += s[i];
            } 
            // If we encounter a space and have a word collected
            else if (!word.empty()) {
                // Push the collected word to words list
                words.push_back(word);
                // Reset word for next word collection
                word = "";
            }
        }
        
        // Push the last word if it exists
        if (!word.empty()) {
            words.push_back(word);
        }
        
        // Reverse the list of words
        reverse(words.begin(), words.end());
        
        // Join the words into a single string separated by spaces
        string result = "";
        for (int i = 0; i < words.size(); i++) {
            result += words[i];
            // Add a space if it's not the last word
            if (i < words.size() - 1) {
                result += " ";
            }
        }
        return result;
    } // TC --> O(N)
    // SC --> O(N)

    string reverseWords_Optimal(string s) {
        // Result string to store final output
        string result = "";
        
        // Pointer starting from the last character
        int i = s.size() - 1;
        
        // Traverse string from right to left
        while (i >= 0) {
            // Skip spaces at the current position
            while (i >= 0 && s[i] == ' ') {
                i--;
            }
            
            // If pointer is out of bounds, break
            if (i < 0) break;
            
            // Mark the end of the current word
            int end = i;
            
            // Move left until a space or start of string is found
            while (i >= 0 && s[i] != ' ') {
                i--;
            }
            
            // Extract the current word
            string word = s.substr(i + 1, end - i);
            
            // Add space before appending next word if result is not empty
            if (!result.empty()) {
                result += " ";
            }
            
            // Append the word to the result
            result += word;
        }
        return result;
    } // TC --> O(N)
    // SC --> O(1)
};

// Driver code
int main() {
    Solution obj;
    string s = " amazing coding skills ";
    cout << obj.reverseWords_Optimal(s) << endl;
    return 0;
}
 