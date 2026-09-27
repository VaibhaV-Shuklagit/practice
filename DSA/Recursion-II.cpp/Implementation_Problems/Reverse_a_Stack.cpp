#include <bits/stdc++.h>
using namespace std;

// Function to insert an element at the bottom of the stack
void insertAtBottom(stack<int> &st, int val)
{
    // If stack is empty, push the value
    if (st.empty())
    {
        st.push(val);
        return;
    }

    // Pop the top element
    int topVal = st.top();
    st.pop();

    // Recurse for the rest of the stack
    insertAtBottom(st, val);

    // Push the popped element back
    st.push(topVal);
}

// Function to reverse the stack
void reverseStack(stack<int> &st)
{
    // Base case: If stack is empty, return
    if (st.empty())
        return;

    // Pop the top element
    int topVal = st.top();
    st.pop();

    // Recursively reverse the remaining stack
    reverseStack(st);

    // Insert the popped element at the bottom
    insertAtBottom(st, topVal);
} // TC --> O(N^2)
// SC --> O(N)

int main()
{

    stack<int> st;
    st.push(4);
    st.push(1);
    st.push(3);
    st.push(2);

    reverseStack(st);

    cout << "Reversed Stack: ";
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;

    return 0;
}