#include <bits/stdc++.h>
using namespace std;

// Node class for the doubly linked list
class Node
{
public:
    int data;
    Node *prev;
    Node *next;

    // Constructor to initialize node with a value
    Node(int val)
    {
        data = val;
        prev = nullptr;
        next = nullptr;
    }
};

// Solution class containing all operations on the doubly linked list
class Solution
{
public:
    // Inserts a new node with the given value at the end of the list
    void insertAtEnd(Node *&head, int val)
    {
        // Create the new node
        Node *newNode = new Node(val);

        // If list is empty, set new node as head
        if (!head)
        {
            head = newNode;
            return;
        }

        // Traverse to the last node
        Node *temp = head;
        while (temp->next)
            temp = temp->next;

        // Link the new node at the end
        temp->next = newNode;
        newNode->prev = temp;
    }

    // Prints the entire linked list from head to tail
    void printList(Node *head)
    {
        // Start from the head node
        Node *temp = head;

        // Traverse and print each node's data
        while (temp)
        {
            cout << temp->data;
            if (temp->next)
                cout << " <-> ";
            temp = temp->next;
        }
        cout << endl;
    }
    vector<pair<int, int>> findPair_BF(Node *head, int target)
    {
        Node *temp1 = head;
        vector<pair<int, int>> ans;
        while (temp1 != NULL)
        {
            Node *temp2 = temp1->next;
            while (temp2 != NULL && temp1->data + temp2->data <= target)
            {
                if (temp1->data + temp2->data == target)
                    ans.push_back({temp1->data, temp2->data});
                temp2 = temp2->next;
            }
            temp1 = temp1->next;
        }
        return ans;
    } // TC --> O(N^2)
    // SC --> O(1)

    Node *findTail(Node *head)
    {
        Node *tail = head;
        while (tail->next != NULL)
            tail = tail->next;
        return tail;
    }
    vector<pair<int, int>> findPair_Optimal(Node *head, int target)
    {
        vector<pair<int, int>> ans;
        if (head == NULL)
            return ans;
        Node *left = head;
        Node *right = findTail(head);
        while (left->data < right->data)
        {
            if (left->data + right->data == target)
            {
                ans.push_back({left->data, right->data});
                left = left->next;
                right = right->prev;
            }
            else if (left->data + right->data < target)
                left = left->next;
            else
                right = right->prev;
        }
        return ans;
    } // TC --> O(N)
    // SC --> O(1)
};

int main()
{
    Solution sol;
    Node *head = nullptr;

    sol.insertAtEnd(head, 1);
    sol.insertAtEnd(head, 2);
    sol.insertAtEnd(head, 3);
    sol.insertAtEnd(head, 4);
    sol.insertAtEnd(head, 5);

    int target = 5;

    cout << "Pairs with Given Sum " << ": ";
    vector<pair<int, int>> ans = sol.findPair_Optimal(head, target);
    for (int i = 0; i < ans.size(); i++)
        cout << ans[i].first << " " << ans[i].second << "\n";

    return 0;
}