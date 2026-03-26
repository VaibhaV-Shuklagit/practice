#include <bits/stdc++.h>
using namespace std;
vector<int> Optimal_Next_Permutation(vector<int> &arr)
{
    int ind = -1;
    int n = arr.size();
    for (int i = n - 2; i >= 0; i--)
    {
        if (arr[i] < arr[i + 1])
        {
            ind = i;
            break;
        }
    }
    if (ind == -1)
    {
        reverse(arr.begin(), arr.end());
        return arr;
    }
    for (int i = n - 1; i > ind; i--)
    {
        if (arr[i] > arr[ind])
        {
            swap(arr[i], arr[ind]);
            break;
        }
    }
    reverse(arr.begin() + ind + 1, arr.end());
    return arr;
} // TC --> O(3N)
// SC --> O(1)
int main()
{
    int t;
    cout << "Test Cases: ";
    cin >> t;
    while (t--)
    {
        int n;
        cout << "Enter the No. of Elements in the Array : ";
        cin >> n;
        vector<int> nums(n);
        cout << "Enter the Elements in the Array : ";
        for (int j = 0; j < n; j++)
        {
            cin >> nums[j];
        }
        Optimal_Next_Permutation(nums);
        for (int j = 0; j < n; j++)
        {
            cout << nums[j] << " ";
        }
        cout << endl;
    }
}
Comprehensive Next Permutation Intuition(w/Algo) Explanation
We'll use the permutation 2 1 5 4 as our main example throughout this explanation.

Understanding the Breakpoint
A breakpoint is a special spot in our number sequence where things start to get interesting.

How to Find the Breakpoint:
Start from the right and move left.
Look for the first number that's smaller than the number to its right.
That smaller number is at our breakpoint.
In our example (2 1 5 4):

Moving from right: 4, then 5 (5 > 4, keep going)
Then we hit 1. Bingo! 1 < 5, so 1 is at our breakpoint.
Why is the Breakpoint Important?
It tells us where we need to make a change to get the next bigger permutation.
Everything to the right of the breakpoint is already as big as it can be.
In 2 1 5 4, the "5 4" part is already the biggest arrangement of those two numbers.
The breakpoint number is the rightmost digit we can increase to get a bigger permutation.
In our case, changing the 1 is our best bet to get the next bigger number.
The Swapping Step
After finding the breakpoint, we perform a swap. Let's dive deep into why and how.

Why Swap?
We need to increase our number, but as little as possible to get the next permutation.
The breakpoint (1 in our case) is the rightmost digit we can change to get a bigger number.
What to Swap With?
We swap with the smallest number to the right of the breakpoint that's larger than the breakpoint number.

In 2 1 5 4:

Numbers to the right of 1 are 5 and 4
The smallest one larger than 1 is 4
So we swap 1 and 4, giving us: 2 4 5 1

Why This Specific Swap?
Smallest Increase: By choosing the smallest larger number, we ensure we're getting the next permutation, not jumping too far ahead.

If we swapped 1 with 5 instead, we'd skip over 2 4 5 1 and 2 4 1 5.
Using Available Digits: We're restricted to using only the digits in our current permutation. Swapping maintains this rule.

Maintaining Prefix: By swapping, we keep the prefix (2 in this case) unchanged, ensuring we're in the correct "family" of permutations.

The Reversing Step
After swapping, we reverse all digits to the right of where the breakpoint was.

In our example: 2 4 5 1 becomes 2 4 1 5

Why Reverse?
Smallest Arrangement: After the swap, the digits to the right of the swap point are in descending order (5 1 in our case). Reversing them gives us the smallest possible arrangement of these digits.

Ensuring Next Permutation: This step guarantees that we're getting the very next permutation in lexicographic order, not skipping any.

Optimal Solution: Reversing is the most efficient way to rearrange these digits. Any other rearrangement would result in a larger permutation.

Putting It All Together
Let's walk through the entire process for 2 1 5 4:

Find the breakpoint: 1 (because 1 < 5)
Swap 1 with the smallest larger number to its right (4): 2 4 5 1
Reverse everything after the original position of 1: 2 4 1 5
Final next permutation: 2 4 1 5

More Examples
Let's try with: 1 3 5 4 2

Breakpoint: 3 (because 3 < 5)
Swap 3 with the smallest larger number to its right (4)
After swap: 1 4 5 3 2
Reverse everything after 4: 1 4 2 3 5
Final next permutation: 1 4 2 3 5
How about: 5 4 3 2 1

No breakpoint! Everything's decreasing.
This means it's the last permutation.
The next permutation loops back to the smallest: 1 2 3 4 5
Key Understanding
The breakpoint is like a sign saying "Change me to get the next bigger number!"
Swapping ensures we make the smallest possible increase.
Reversing guarantees we get the very next permutation in order.
This method is efficient because it avoids checking all possibilities.
Remember, finding the next permutation is all about making the smallest possible increase in the numerical value of the sequence, and doing it at the rightmost possible position. The breakpoint, swapping, and reversing steps work together to achieve this goal efficiently