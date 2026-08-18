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

Node *findMiddle_BF(Node *head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }

    Node *temp = head;
    int count = 0;

    // Count the number of nodes in the linked list.
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }

    // Calculate the position of the middle node.
    int mid = count / 2 + 1;
    temp = head;

    // Traverse to the middle node by moving
    // temp to the middle position.
    while (temp != null)
    {
        mid = mid - 1;

        // Check if the middle
        // position is reached.
        if (mid == 0)
        {
            // break out of the loop
            // to return temp
            break;
        }
        // Move temp ahead
        temp = temp->next;
    }
    // Return the middle node.
    return temp;
} // TC --> O(N + N/2)
// SC --> O(1)

Node *findMiddle_Optimal(Node *head) // Hare-Tortoise Algorithm
{

    // Initialize the slow pointer to the head.
    Node *slow = head;

    // Initialize the fast pointer to the head.
    Node *fast = head;

    // Traverse the linked list using the
    // Tortoise and Hare algorithm.
    while (fast != NULL && fast->next != NULL)
    {
        // Move slow one step.
        slow = slow->next;
        // Move fast two steps.
        fast = fast->next->next;
    }

    // Return the slow pointer,
    // which is now at the middle node.
    return slow;
} // TC --> O(N/2)
// SC --> O(1)
int main()
{
    Node *head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);

    Node *middleNode = findMiddle_Optimal(head);

    cout << "The middle node value is: " << middleNode->data << endl;

    return 0;
}