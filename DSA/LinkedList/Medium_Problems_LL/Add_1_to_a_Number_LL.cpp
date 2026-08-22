#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int value)
    {
        data = value;
        next = nullptr;
    }
};

// LinkedList class to manage node-level operations
class LinkedList
{
public:
    // function to insert digit at the end
    Node *append(Node *head, int value)
    {
        Node *newNode = new Node(value);
        if (!head)
        {
            return newNode;
        }
        Node *current = head;
        while (current->next)
            current = current->next;
        current->next = newNode;
        return head;
    }

    // Function to print the list
    void printList(Node *head)
    {
        Node *current = head;
        while (current)
        {
            cout << current->data;
            current = current->next;
        }
        cout << endl;
    }
};

// Solution class having the addOne logic
class Solution
{
public:
    // function to reverse the linked list
    Node *reverseList(Node *node)
    {
        Node *prev = nullptr;
        Node *current = node;

        while (current)
        {
            Node *nextNode = current->next;
            current->next = prev;
            prev = current;
            current = nextNode;
        }
        return prev;
    }

    // Function to add one to the number represented by the linked list
    Node *addOne_Iterative(Node *head)
    {
        // Reverse the list to make least significant digit accessible
        head = reverseList(head);

        Node *current = head;
        // Initial carry since we want to add 1
        int carry = 1;

        // Traverse the list and add carry
        while (current && carry)
        {
            int sum = current->data + carry;
            current->data = sum % 10;
            carry = sum / 10;

            // If there's no next node and we still have a carry, append a new node
            if (!current->next && carry)
            {
                current->next = new Node(carry);
                carry = 0;
            }

            current = current->next;
        }

        // Reverse the list back to restore original order
        head = reverseList(head);
        return head;
    } // TC  --> O(3N)
    // SC --> O(1)

    // Recursive function to add one from least significant digit (rightmost node)
    int addOneUtil(Node *node)
    {
        // Base case: when reaching beyond last node, return carry = 1
        if (!node)
            return 1;

        // Recurse to the end
        int carry = addOneUtil(node->next);
        int sum = node->data + carry;
        node->data = sum % 10;
        // Return new carry
        return sum / 10;
    }

    // Function to add one to the number represented by the linked list
    Node *addOne_Recursive(Node *head)
    {
        // Perform recursive addition
        int carry = addOneUtil(head);

        // If carry remains after processing the head, create a new head node
        if (carry)
        {
            Node *newHead = new Node(carry);
            newHead->next = head;
            head = newHead;
        }
        return head;
    }
};

int main()
{
    Node *head = nullptr;
    LinkedList ll;
    Solution sol;

    head = ll.append(head, 1);
    head = ll.append(head, 2);
    head = ll.append(head, 9);

    cout << "Original Number: ";
    ll.printList(head);

    head = sol.addOne_Recursive(head);

    cout << "After Adding One: ";
    ll.printList(head);

    return 0;
}