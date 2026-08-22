#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *prev;
    Node *next;

    Node(int value)
    {
        data = value;
        prev = nullptr;
        next = nullptr;
    }
};

class Solution
{
public:
    Node *head = nullptr;

    void insertAtEnd(int value)
    {
        Node *newNode = new Node(value);

        if (!head)
        {
            head = newNode;
            return;
        }

        Node *current = head;
        while (current->next)
        {
            current = current->next;
        }

        current->next = newNode;
        newNode->prev = current;
    }

    Node *removeDuplicates()
    {
        // If the list is empty, return null
        if (!head)
            return nullptr;

        Node *current = head;

        // Traverse the list until the second last node
        while (current != nullptr && current->next != nullptr)
        {
            Node *nextDistinct = current->next;

            // Skip and delete all nodes with the same value as current
            while (nextDistinct != nullptr && nextDistinct->data == current->data)
            {
                Node *duplicateNode = nextDistinct;
                nextDistinct = nextDistinct->next;
                delete duplicateNode; // Free memory of duplicate node
            }

            // Connect current node to the next distinct node
            current->next = nextDistinct;
            if (nextDistinct != nullptr)
            {
                nextDistinct->prev = current;
            }

            // Move to the next node
            current = current->next;
        }
        // Return the updated head of the list
        return head;
    } // TC --> O(N)
    // SC --> O(1)

    void printList()
    {
        Node *current = head;

        while (current)
        {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }
};

int main()
{
    Solution sol;

    vector<int> values = {1, 2, 2, 2, 3, 4, 4, 5, 5, 6};

    for (int value : values)
    {
        sol.insertAtEnd(value);
    }

    cout << "Original List: ";
    sol.printList();

    sol.removeDuplicates();

    cout << "After Removing Duplicates (keeping 1 occurrence): ";
    sol.printList();

    return 0;
}
