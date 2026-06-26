#include <bits/stdc++.h>
using namespace std;

bool Lemonade_Change(vector<int> &bills, int n)
{
    int five = 0, ten = 0;
    for (int i = 0; i < n; i++)
    {
        if (bills[i] == 5)
            five++;
        else if (bills[i] == 10)
        {
            if (five)
            {
                five--;
                ten++;
            }
            else
                return false;
        }
        else
        {
            if (ten && five)
            {
                ten--;
                five--;
            }
            else if (five >= 3)
                five -= 3;
            else
                return false;
        }
    }
    return true;
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
        int n;
        cin >> n;
        vector<int> bills(n);
        for (int i = 0; i < n; i++)
            cin >> bills[i];
        cout << Lemonade_Change(bills, n) << "\n";
    }
}