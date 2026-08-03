#include <bits/stdc++.h>
using namespace std;

// Class representing a node in Doubly Linked List
class Node {
public:
    int data;
    Node* next;
    Node* prev;

    Node(int data1, Node* next1, Node* prev1) {
        data = data1;
        next = next1;
        prev = prev1;
    }

    Node(int data1) {
        data = data1;
        next = nullptr;
        prev = nullptr;
    }
};

int main() {
    
    vector<int> arr = {2, 5, 8, 7};

    Node* head = new Node(arr[0]);

    cout << head << '\n';

    cout << head->data << '\n';

    return 0;
}