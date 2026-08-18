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
    bool detectLoop_BF(Node *head)
    {
        Node *temp = head;

        // Create a map to keep track of visited nodes
        unordered_map<Node *, int> nodeMap;

        // Traverse the linked list
        while (temp != nullptr)
        {
            // If node already exists in map, loop detected
            if (nodeMap.find(temp) != nodeMap.end())
            {
                return true;
            }
            // Store the current node in the map
            nodeMap[temp] = 1;

            temp = temp->next;
        }

        // If traversal completes, no loop detected
        return false;
    } // TC --> O(N)[Best] && O(N^2)[Worst]
    // SC --> O(N)

    bool detectLoop_Optimal(ListNode *head)
    { // Hare-Tortoise Method OR Floyd's Cycle Detection Algorithm
        // Initialize two pointers, slow and fast,
        // to the head of the linked list
        ListNode *slow = head;
        ListNode *fast = head;

        // Step 2: Traverse the linked list with
        // the slow and fast pointers
        while (fast != nullptr && fast->next != nullptr)
        {
            // Move slow one step
            slow = slow->next;
            // Move fast two steps
            fast = fast->next->next;

            // Check if slow and fast pointers meet
            if (slow == fast)
            {
                return true; // Loop detected
            }
        }

        // If fast reaches the end of the list,
        // there is no loop
        return false;
    } // TC --> O(N)
    // SC --> O(1)
};

int main()
{
    Node *head = new Node(1);
    Node *second = new Node(2);
    Node *third = new Node(3);
    Node *fourth = new Node(4);
    Node *fifth = new Node(5);

    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;

    // Create a loop for testing
    fifth->next = third;

    Solution obj;

    if (obj.detectLoop_Optimal(head))
    {
        cout << "Loop detected in the linked list." << endl;
    }
    else
    {
        cout << "No loop detected in the linked list." << endl;
    }

    delete head;
    delete second;
    delete third;
    delete fourth;
    delete fifth;

    return 0;
}