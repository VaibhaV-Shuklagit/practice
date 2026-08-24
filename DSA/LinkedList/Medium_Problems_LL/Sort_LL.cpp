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
    // Function to sort the linked list
    Node *sortLL_BF(Node *head)
    {
        // Vector to store node values
        vector<int> arr;

        // Pointer to traverse the list
        Node *temp = head;

        // Traverse and push values into vector
        while (temp != nullptr)
        {
            arr.push_back(temp->data);
            temp = temp->next;
        }

        // Sort the vector
        sort(arr.begin(), arr.end());

        // Reassign sorted values to list nodes
        temp = head;
        for (int i = 0; i < arr.size(); i++)
        {
            temp->data = arr[i];
            temp = temp->next;
        }

        // Return head of sorted list
        return head;
    } // TC --> O(2*N + N*LogN)
    // SC --> O(N)

    // Function to merge two sorted linked lists
    Node *mergeTwoSortedLinkedLists(Node *list1, Node *list2)
    {
        // Create a dummy node
        Node *dummyNode = new Node(-1);

        // Temp pointer to build merged list
        Node *temp = dummyNode;

        // Traverse both lists
        while (list1 != nullptr && list2 != nullptr)
        {
            // Choose smaller node
            if (list1->data <= list2->data)
            {
                temp->next = list1;
                list1 = list1->next;
            }
            else
            {
                temp->next = list2;
                list2 = list2->next;
            }
            // Move temp pointer
            temp = temp->next;
        }

        // Attach remaining nodes
        if (list1 != nullptr)
        {
            temp->next = list1;
        }
        else
        {
            temp->next = list2;
        }

        // Return head of merged list
        return dummyNode->next;
    }

    // Function to find middle of linked list
    Node *findMiddle(Node *head)
    {
        // If list empty or single node
        if (head == nullptr || head->next == nullptr)
        {
            return head;
        }

        // Slow and fast pointers
        Node *slow = head;
        Node *fast = head->next;

        // Move fast twice as fast as slow
        while (fast != nullptr && fast->next != nullptr)
        {
            slow = slow->next;
            fast = fast->next->next;
        }

        // Return middle node
        return slow;
    }

    // Function to perform merge sort
    Node *sortLL_Optimal(Node *head)
    {
        // Base case: empty or single node
        if (head == nullptr || head->next == nullptr)
        {
            return head;
        }

        // Find middle node
        Node *middle = findMiddle(head);

        // Split into two halves
        Node *right = middle->next;
        middle->next = nullptr;
        Node *left = head;

        // Recursively sort both halves
        left = sortLL(left);
        right = sortLL(right);

        // Merge sorted halves
        return mergeTwoSortedLinkedLists(left, right);
    } // TC --> O(N*LogN)
    // SC --> O(1)
};

void printLinkedList(Node *head)
{
    Node *temp = head;

    while (temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    Node *head = new Node(3);
    head->next = new Node(2);
    head->next->next = new Node(5);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(1);

    cout << "Original Linked List: ";
    printLinkedList(head);

    Solution obj;

    head = obj.sortLL_Optimal(head);

    cout << "Sorted Linked List: ";
    printLinkedList(head);

    return 0;
}
