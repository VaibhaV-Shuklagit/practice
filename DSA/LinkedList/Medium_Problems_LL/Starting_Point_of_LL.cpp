#include <bits/stdc++.h>
using namespace std;

class ListNode
{
public:
    int val;
    ListNode *next;
    ListNode(int x)
    {
        val = x;
        next = NULL;
    }
};

class Solution
{
public:
    // Function to detect start of loop using Hash Map
    ListNode *detectCycle_BF(ListNode *head)
    {
        // Create a map to store visited nodes
        unordered_set<ListNode *> visited;

        // Start traversing from head
        while (head != NULL)
        {
            // If current node is already in set, it's the start of loop
            if (visited.find(head) != visited.end())
            {
                return head;
            }

            // Otherwise, insert current node into set
            visited.insert(head);

            // Move to the next node
            head = head->next;
        }

        // If loop not found, return NULL
        return NULL;
    } // TC --> O(N)
    // SC --> O(N)

    // Function to detect the starting point of the loop using Floyd’s algorithm
    ListNode *detectCycle_Optimal(ListNode *head)
    {
        // Initialize slow and fast pointers
        ListNode *slow = head;
        ListNode *fast = head;

        // Traverse until fast and fast->next are not null
        while (fast != NULL && fast->next != NULL)
        {
            // Move slow by one step
            slow = slow->next;

            // Move fast by two steps
            fast = fast->next->next;

            // If they meet, loop is detected
            if (slow == fast)
            {
                // Reset slow to head
                slow = head;

                // Move both one step at a time to find starting point
                while (slow != fast)
                {
                    slow = slow->next;
                    fast = fast->next;
                }

                // Return the start node of the loop
                return slow;
            }
        }
        // If no loop found, return NULL
        return NULL;
    } // TC --> O(N)
    // SC --> O(1)
};

int main()
{
    // Creating nodes
    ListNode *head = new ListNode(3);
    head->next = new ListNode(2);
    head->next->next = new ListNode(0);
    head->next->next->next = new ListNode(-4);

    // Creating a cycle (tail connects to node index 1)
    head->next->next->next->next = head->next;

    Solution obj;
    ListNode *startNode = obj.detectCycle_Optimal(head);

    if (startNode)
        cout << "Cycle starts at node with value: " << startNode->val << endl;
    else
        cout << "No cycle found." << endl;

    return 0;
}