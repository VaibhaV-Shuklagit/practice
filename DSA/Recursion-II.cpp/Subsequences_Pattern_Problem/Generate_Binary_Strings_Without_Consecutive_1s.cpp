#include <bits/stdc++.h>
using namespace std;

void generateStrings(int index, string &currentStr, int n, vector<string> &result)
{
    // Base Case: If the string reaches the target length N
    if (index == n)
    {
        result.push_back(currentStr);
        return;
    }

    // Option 1: Always allowed to append '0'
    currentStr.push_back('0');
    generateStrings(index + 1, currentStr, n, result);
    currentStr.pop_back(); // Backtrack

    // Option 2: Append '1' only if the string is empty or the last character is '0'
    if (currentStr.empty() || currentStr.back() == '0')
    {
        currentStr.push_back('1');
        generateStrings(index + 1, currentStr, n, result);
        currentStr.pop_back(); // Backtrack
    }
}

vector<string> getBinStrings(int n)
{
    vector<string> result;
    string currentStr = "";
    generateStrings(0, currentStr, n, result);
    return result;
}

int main()
{

    int n = 3;
    vector<string> ans = getBinStrings(n);

    cout << "Binary strings of length " << n << " without consecutive 1s:" << endl;
    for (const string &str : ans)
    {
        cout << str << "\n";
    }

    return 0;
}
