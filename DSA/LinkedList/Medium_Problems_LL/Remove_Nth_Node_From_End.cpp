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
    void printLL(Node *head)
    {
        while (head != NULL)
        {
            cout << head->data << " ";
            head = head->next;
        }
    }

    // Function to delete the Nth node from the end
    Node *deleteNthNodeFromEnd_BF(Node *head, int N)
    {
        // If list is empty, return NULL
        if (head == NULL)
        {
            return NULL;
        }

        int cnt = 0;
        Node *temp = head;

        // Count the number of nodes in the linked list
        while (temp != NULL)
        {
            cnt++;
            temp = temp->next;
        }

        // If N equals the total number of nodes, delete the head
        if (cnt == N)
        {
            Node *newHead = head->next;
            // free memory
            delete head;
            return newHead;
        }

        // Calculate the position from start to delete
        int res = cnt - N;
        temp = head;

        // Traverse to the node just before the one to delete
        while (temp != NULL)
        {
            res--;
            if (res == 0)
            {
                break;
            }
            temp = temp->next;
        }

        // Delete the target node
        Node *delNode = temp->next;
        temp->next = temp->next->next;
        delete delNode; // free memory

        return head;
    } // TC --> O(L) + O(L - N)
    // SC --> O(1)

    // using the optimized two-pointer method
    Node *deleteNthNodeFromEnd_Optimal(Node *head, int N)
    {
        // Create a dummy node before head to handle edge cases
        Node *dummy = new Node(0, head);

        // Initialize slow and fast pointers at dummy
        Node *slow = dummy;
        Node *fast = dummy;

        // Move fast pointer N+1 steps ahead to create a gap
        for (int i = 0; i <= N; i++)
        {
            fast = fast->next;
        }

        // Move both pointers until fast reaches the end
        while (fast != NULL)
        {
            slow = slow->next;
            fast = fast->next;
        }

        // Slow is now at node before target → delete target node
        slow->next = slow->next->next;

        // Return updated head
        return dummy->next;
    } // TC --> O(L)
    // SC --> O(1)
};

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    int N = 3;

    Node *head = new Node(arr[0]);
    head->next = new Node(arr[1]);
    head->next->next = new Node(arr[2]);
    head->next->next->next = new Node(arr[3]);
    head->next->next->next->next = new Node(arr[4]);

    Solution sol;
    head = sol.deleteNthNodeFromEnd_Optimal(head, N);
    sol.printLL(head);
}