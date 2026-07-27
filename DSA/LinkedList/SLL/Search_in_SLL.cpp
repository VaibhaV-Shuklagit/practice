#include <bits/stdc++.h>
using namespace std;

// Node structure for Linked List
struct Node
{
    int data;
    Node *next;
    Node(int val) : data(val), next(NULL) {}
};

bool searchValue(Node *head, int key)
{
    // Pointer to traverse the list
    Node *current = head;

    // Traverse until end
    while (current != NULL)
    {
        // Check if current node matches key
        if (current->data == key)
        {
            // Return true if found
            return true;
        }
        // Move to next node
        current = current->next;
    }

    return false;
}

int main()
{
    // Creating linked list: 10 -> 20 -> 30
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);

    if (searchValue(head, 20))
        cout << "Found\n";
    else
        cout << "Not Found\n";

    return 0;
}