#include <bits/stdc++.h>
using namespace std;

bool rotateString_BF(string &s, string &goal)
{
    // Strings must be same length to be rotations of each other
    if (s.length() != goal.length())
    {
        return false;
    }
    // Try all possible rotations of 's'
    for (int i = 0; i < s.length(); i++)
    {
        string rotated = s.substr(i) + s.substr(0, i);
        if (rotated == goal)
        {
            return true;
        }
    }
    return false;
} // TC --> O(N^2)
// SC --> O(N)

bool rotateString_Optimal(string &s, string &goal)
{
    // Strings must be the same length to be rotations of each other
    if (s.length() != goal.length())
        return false;

    // Concatenate s with itself and check if goal exists in it
    string doubledS = s + s;
    return doubledS.find(goal) != string::npos;
} // TC --> O(N)
// SC --> O(N)

int main()
{
    string s = "rotation";
    string goal = "tionrota";

    if (rotateString_Optimal(s, goal))
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }
    return 0;
}