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

Node *insertAtHead(Node *head, int newData)
{
    // Create a new node whose next points to current head
    Node *newNode = new Node(newData, head);
    // Return the new node as the head
    return newNode;
}

void printList(Node *head)
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

    Node *head = new Node(2);
    head->next = new Node(3);

    cout << "Original List: ";
    printList(head);

    head = insertAtHead(head, 1);

    cout << "After Insertion at Head: ";
    printList(head);

    return 0;
}