#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *prev;
    Node *next;

    Node(int val)
    {
        data = val;
        prev = nullptr;
        next = nullptr;
    }
};

class Solution
{
public:
    void insertAtEnd(Node *&head, int val)
    {
        Node *newNode = new Node(val);

        if (!head)
        {
            head = newNode;
            return;
        }

        Node *temp = head;
        while (temp->next)
            temp = temp->next;

        temp->next = newNode;
        newNode->prev = temp;
    }

    void printList(Node *head)
    {
        Node *temp = head;

        while (temp)
        {
            cout << temp->data;
            if (temp->next)
                cout << " <-> ";
            temp = temp->next;
        }
        cout << endl;
    }

    // Deletes all nodes that have the specified target value
    Node *deleteTargetNodes(Node *head, int target)
    {
        // Start from the head node
        Node *current = head;

        // Traverse the entire list
        while (current != nullptr)
        {
            // Store next node before possibly deleting current
            Node *nextNode = current->next;

            // If current node matches the target value
            if (current->data == target)
            {
                // If not the head, link previous node to next
                if (current->prev)
                    current->prev->next = current->next;
                else
                    // If it's the head, move head forward
                    head = current->next;

                // If not the tail, link next node to previous
                if (current->next)
                    current->next->prev = current->prev;

                // Delete the current node
                delete current;
            }

            // Move to the next node
            current = nextNode;
        }

        // Return updated head
        return head;
    }
};

int main()
{
    Solution sol;
    Node *head = nullptr;

    sol.insertAtEnd(head, 1);
    sol.insertAtEnd(head, 2);
    sol.insertAtEnd(head, 3);
    sol.insertAtEnd(head, 2);
    sol.insertAtEnd(head, 4);
    sol.insertAtEnd(head, 2);
    sol.insertAtEnd(head, 5);

    cout << "Original List:\n";
    sol.printList(head);

    int target = 2;

    head = sol.deleteTargetNodes(head, target);

    cout << "\nList after deleting value " << target << ":\n";
    sol.printList(head);

    return 0;
}
