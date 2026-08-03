#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *prev;
    Node *next;
    Node(int val)
    {
        data = val;
        prev = NULL;
        next = NULL;
    }
};

class Solution
{
public:
    Node *deleteTail(Node *head)
    {
        if (head == NULL)
            return NULL;

        if (head->next == NULL)
        {
            delete head;
            return NULL;
        }

        Node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }

        temp->prev->next = NULL;

        delete temp;

        return head;
    }
};
 // TC --> O(N)
// SC --> O(1)

int main()
{
    // Create a sample DLL: 1 <-> 2 <-> 3
    Node *head = new Node(1);
    head->next = new Node(2);
    head->next->prev = head;
    head->next->next = new Node(3);
    head->next->next->prev = head->next;

    Solution obj;
    head = obj.deleteTail(head);

    Node *curr = head;
    while (curr != NULL)
    {
        cout << curr->data << " ";
        curr = curr->next;
    }
    return 0;
}