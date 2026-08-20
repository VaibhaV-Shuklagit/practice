#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;

    Node *next;

    Node(int data1, Node *next1)
    {
        data = data1;
        next = next1;
    }

    Node(int data1)
    {
        data = data1;
        next = nullptr;
    }
};

class Solution
{
public:
    Node *deleteMiddle_BF(Node *head)
    {
        // Initialize a temporary node to traverse the linked list
        Node *temp = head;

        // Variable to hold the number of nodes in the linked list
        int n = 0;

        // Loop to count the number of nodes in the linked list
        while (temp != NULL)
        {
            n++;
            temp = temp->next;
        }

        // Calculate the index of the middle node
        int res = n / 2;

        // Reset the temporary node to the beginning of the linked list
        temp = head;

        // Loop to find the middle node to delete
        while (temp != NULL)
        {
            res--;

            // If the middle node is found
            if (res == 0)
            {
                // Create a pointer to the middle node
                Node *middle = temp->next;

                // Adjust pointers to skip the middle node
                temp->next = temp->next->next;

                // Free the memory allocated to the middle node
                free(middle);

                // Exit the loop after deleting the middle node
                break;
            }

            // Move to the next node in the linked list
            temp = temp->next;
        }

        // Return the head of the modified linked list
        return head;
    } // TC --> O(N + N/2)
    // SC --> O(1)

    // Function to delete the middle node using slow and fast pointer
    Node *deleteMiddle_Optimal(Node *head)
    {
        // If list has only one node, delete it
        if (head == nullptr || head->next == nullptr)
        {
            delete head;
            return nullptr;
        }

        // Initialize slow pointer to head
        Node *slow = head;

        // Initialize fast pointer two steps ahead
        Node *fast = head->next->next;

        // Traverse until fast reaches end
        while (fast != nullptr && fast->next != nullptr)
        {
            slow = slow->next;
            fast = fast->next->next;
        }

        // Pointer to middle node
        Node *middle = slow->next;

        // Bypass the middle node
        slow->next = slow->next->next;

        // Delete middle node
        delete middle;

        // Return head of updated list
        return head;
    } // TC --> O(N)
    // SC --> O(1)
};

void printLL(Node *head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl;
}

int main()
{

    Node *head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);

    cout << "Original Linked List: ";
    printLL(head);

    Solution obj;

    head = obj.deleteMiddle_Optimal(head);

    cout << "Updated Linked List: ";
    printLL(head);

    return 0;
}
