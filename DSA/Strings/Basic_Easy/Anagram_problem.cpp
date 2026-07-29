#include <bits/stdc++.h>
using namespace std;

bool CheckAnagrams_BF(string str1, string str2)
{
    // Case 1: when both of the strings have different lengths
    if (str1.length() != str2.length())
    {
        return false; // Strings can't be anagrams if lengths are different
    }

    // Sort both strings
    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());

    // Case 2: check if every character of str1 and str2 matches with each other
    for (int i = 0; i < str1.length(); i++)
    {
        if (str1[i] != str2[i])
        {
            return false; // If any character doesn't match, they aren't anagrams
        }
    }

    return true;
} // TC --> O(N*LogN)
// SC --> O(1)
bool CheckAnagrams_Optimal(string str1, string str2)
{
    // Case: when both of the strings have different lengths
    if (str1.length() != str2.length())
        return false;

    // Initialize a frequency array to store character counts
    int freq[26] = {0};

    // Count frequency of each character in str1
    for (int i = 0; i < str1.length(); i++)
    {
        freq[str1[i] - 'A']++; // Increment frequency for each character in str1
    }

    // Decrement frequency for each character in str2
    for (int i = 0; i < str2.length(); i++)
    {
        freq[str2[i] - 'A']--; // Decrement frequency for each character in str2
    }

    // Check if all frequencies are zero, meaning both strings have the same characters
    for (int i = 0; i < 26; i++)
    {
        if (freq[i] != 0) // If any frequency is non-zero, they are not anagrams
            return false;
    }

    return true;
} // TC --> O(N)
// SC --> O(1)
int main()
{
    string Str1 = "INTEGER";
    string Str2 = "TEGERNI";

    if (CheckAnagrams(Str1, Str2))
    {
        cout << "True" << endl;
    }
    else
    {
        cout << "False" << endl;
    }

    return 0;
}