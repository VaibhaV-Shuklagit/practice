#include <iostream>
#include <vector>

using namespace std;

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> prime(n + 1, 1);

    if (n >= 0)
        prime[0] = 0;
    if (n >= 1)
        prime[1] = 0;

    for (long long i = 2; i * i <= n; i++)
    {
        if (prime[i])
        {
            for (long long j = i * i; j <= n; j += i)
            {
                prime[j] = 0;
            }
        }
    }

    for (int i = 2; i <= n; i++)
    {
        if (prime[i])
        {
            cout << i << " ";
        }
    }
    return 0;
}
