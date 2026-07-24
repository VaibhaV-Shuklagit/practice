#include <bits/stdc++.h>
using namespace std;

string largeOddNum(string &s)
{
    int ind = -1;

    // Find the last odd digit in the string
    int i;
    for (i = s.length() - 1; i >= 0; i--)
    {
        if ((s[i] - '0') % 2 == 1)
        {
            ind = i;
            break;
        }
    }

    // Skip leading zeroes up to the odd digit
    i = 0;
    while (i <= ind && s[i] == '0')
        i++;

    // Return substring from first non-zero to odd digit
    return s.substr(i, ind - i + 1);
} // TC --> O(N)
// SC --> O(1)
int main()
{
    string num = "504";
    string result = largeOddNum(num);
    cout << result << endl;
    return 0;
}