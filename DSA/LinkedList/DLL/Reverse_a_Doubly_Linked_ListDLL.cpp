#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *back;

    Node(int data1, Node *next1, Node *back1)
    {
        data = data1;
        next = next1;
        back = back1;
    }

    Node(int data1)
    {
        data = data1;
        next = nullptr;
        back = nullptr;
    }
};

void print(Node *head)
{
    while (head != nullptr)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

// Function to convert a vector into a doubly linked list
Node *convertArr2DLL(vector<int> arr)
{
    // Create head node using the first array element
    Node *head = new Node(arr[0]);

    // Initialize previous node as head
    Node *prev = head;

    // Iterate through the remaining elements
    for (int i = 1; i < arr.size(); i++)
    {
        // Create new node with current value and back link to prev
        Node *temp = new Node(arr[i], nullptr, prev);

        // Set the next pointer of previous node to new node
        prev->next = temp;

        // Move prev to the new node
        prev = temp;
    }

    return head;
}

Node *reverseDLL_BF(Node *head)
{
    if (head == nullptr || head->next == nullptr)
    {
        return head;
    }

    // Stack to store node data
    stack<int> st;

    // Pointer to traverse the list
    Node *temp = head;

    // Push all node values to stack
    while (temp != nullptr)
    {
        st.push(temp->data);
        temp = temp->next;
    }

    // Reset temp to head for second pass
    temp = head;

    // Replace node values with those from stack
    while (temp != nullptr)
    {
        temp->data = st.top();
        st.pop();
        temp = temp->next;
    }

    return head;
} // TC --> O(2N)
// SC --> O(1)

// Function to reverse the doubly linked list in-place
Node *reverseDLL_Optimal(Node *head)
{
    // If list is empty or has one node, nothing to reverse
    if (head == nullptr || head->next == nullptr)
        return head;

    // Pointer to track the current node
    Node *curr = head;

    // Traverse the DLL
    while (curr != nullptr)
    {
        // Swap next and back pointers of current node
        Node *temp = curr->next;
        curr->next = curr->back;
        curr->back = temp;

        // Move to the next node in original order
        head = curr;
        curr = temp;
    }

    // Return new head after full reversal
    return head;
} // TC --> O(N)
// SC --> O(1)

int main()
{
    vector<int> arr = {12, 5, 8, 7, 4};

    Node *head = convertArr2DLL(arr);

    cout << endl
         << "Doubly Linked List Initially: " << endl;
    print(head);

    head = reverseDLL(head);

    cout << endl
         << "Doubly Linked List After Reversing: " << endl;
    print(head);

    return 0;
}
