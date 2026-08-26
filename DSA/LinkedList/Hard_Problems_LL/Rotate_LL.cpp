#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution
{
public:
    ListNode *rotateRight_BF(ListNode *head, int k)
    {
        // If list is empty or has only one node or no rotation needed
        if (!head || !head->next || k == 0)
            return head;

        // Repeat the rotation process k times
        for (int i = 0; i < k; i++)
        {
            // Initialize two pointers to traverse the list
            ListNode *curr = head;
            ListNode *prev = NULL;

            // Traverse to the last node
            while (curr->next)
            {
                prev = curr;
                curr = curr->next;
            }

            // Detach the last node and place it at the beginning
            prev->next = NULL;
            curr->next = head;
            head = curr;
        }

        // Return the rotated head
        return head;
    } // TC --> O(k*N)
    // SC --> O(1)

    ListNode *rotateRight_Optimal(ListNode *head, int k)
    {
        // If list is empty or has only one node, or no rotation is needed
        if (!head || !head->next || k == 0)
            return head;

        // Initialize length and tail pointer
        int length = 1;
        ListNode *tail = head;

        // Traverse to find the tail and length
        while (tail->next)
        {
            tail = tail->next;
            length++;
        }

        // Make it a circular linked list
        tail->next = head;

        // Effective rotations needed
        k = k % length;

        // Traverse to the new tail (length - k - 1 steps from head)
        int stepsToNewTail = length - k;
        ListNode *newTail = head;
        for (int i = 1; i < stepsToNewTail; i++)
        {
            newTail = newTail->next;
        }

        // Set the new head
        ListNode *newHead = newTail->next;

        // Break the circle
        newTail->next = NULL;

        return newHead;
    } // TC --> O(N)
    // SC --> O(1)
};

int main()
{
    // Creating the linked list 1->2->3->4->5
    ListNode *head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);

    Solution obj;
    int k = 2;
    ListNode *result = obj.rotateRight_Optimal(head, k);

    while (result)
    {
        cout << result->val << " ";
        result = result->next;
    }
    return 0;
}
