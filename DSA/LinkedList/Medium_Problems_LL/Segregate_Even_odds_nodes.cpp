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
        next = nullptr;
    }
};
// Head and tail pointers of the LinkedList
ListNode *head, *tail;

// Function to print the LinkedList
void PrintList(ListNode *head)
{
    ListNode *curr = head;
    for (; curr != nullptr; curr = curr->next)
        cout << curr->val << "-->";
    cout << "null" << endl;
}

// Function to insert a node at the end of the LinkedList
void InsertatLast(int value)
{
    ListNode *newnode = new ListNode(value);
    if (head == nullptr)
        head = newnode, tail = newnode;
    else
        tail = tail->next = newnode;
}

// Function to segregate even and odd nodes in the LinkedList
ListNode *SegregatetoOddEVen()
{
    ListNode *odd = head; 
    ListNode *even = head->next;
    ListNode *evenhead = head->next;
    while (even != NULL && even->next != NULL)
    {
        odd->next = odd->next->next;
        even->next = even->next->next;

        odd = odd->next;
        even = even->next;
    }
    odd->next = evenhead;
    return head;
}

int main()
{
    // Inserting elements into the LinkedList
    InsertatLast(1);
    InsertatLast(2);
    InsertatLast(3);
    InsertatLast(4);

    // Printing initial LinkedList
    cout << "Initial LinkedList : " << endl;
    PrintList(head);

    // Segregating even and odd nodes
    ListNode *newHead = SegregatetoOddEVen();

    // Printing modified LinkedList
    cout << "LinkedList After Segregration : " << endl;
    PrintList(newHead);

    return 0;
}