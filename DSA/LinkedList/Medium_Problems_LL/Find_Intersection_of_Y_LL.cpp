#include<bits/stdc++.h>
using namespace std;

class node {
public:
    int num;
    node* next;
    node(int val) {
        num = val;
        next = NULL;
    }
};

void insertNode(node* &head, int val) {
    node* newNode = new node(val);
    
    if (head == NULL) {
        head = newNode;
        return;
    }
    
    node* temp = head;
    while (temp->next != NULL) temp = temp->next;
    
    temp->next = newNode;
    return;
}

node* intersectionPresent_BF(node* head1, node* head2) {
    while (head2 != NULL) {
        node* temp = head1;
        while (temp != NULL) {
            // If both nodes are the same (intersection point)
            if (temp == head2) return head2;
            temp = temp->next;
        }
        head2 = head2->next;
    }
    // Intersection is not present between the lists, return NULL
    return NULL;
} // TC --> O(M*N)
// SC --> O(1)

node* intersectionPresent_Better(node* head1, node* head2) {
    unordered_set<node*> st;  // Set to store visited nodes from the first list
    while (head1 != NULL) {
        st.insert(head1);  // Insert nodes of the first list into the set
        head1 = head1->next;
    }
    while (head2 != NULL) {
        if (st.find(head2) != st.end()) return head2;  // If node is found in set, it's the intersection point
        head2 = head2->next;
    }
    return NULL;  // Return NULL if no intersection is found
} // TC --> O(N + M)
// SC --> O(N)

int getDifference(node* head1, node* head2) {
    int len1 = 0, len2 = 0;
    while (head1 != NULL || head2 != NULL) {
        if (head1 != NULL) {
            ++len1;
            head1 = head1->next;
        }
        if (head2 != NULL) {
            ++len2;
            head2 = head2->next;
        }
    }
    return len1 - len2;  // If negative, length of list2 > length of list1, else vice-versa
}

node* intersectionPresent_Optimal1(node* head1, node* head2) {
    int diff = getDifference(head1, head2);
    
    if (diff < 0) 
        while (diff++ != 0) head2 = head2->next;
    else 
        while (diff-- != 0) head1 = head1->next;
    
    // Traverse both lists and compare node by node
    while (head1 != NULL) {
        if (head1 == head2) return head1;  // Intersection point found
        head2 = head2->next;
        head1 = head1->next;
    }
    return head1;  // Return NULL if no intersection
} // TC --> O(N + 2*M)
// SC --> O(1)

node* intersectionPresent_Optimal2(node* head1, node* head2) {
    node* d1 = head1;
    node* d2 = head2;
    
    // Traverse both lists, when one reaches the end, redirect it to the head of the other list
    while (d1 != d2) {
        d1 = d1 == NULL ? head2 : d1->next;
        d2 = d2 == NULL ? head1 : d2->next;
    }
    
    return d1;  // If they meet, return the intersection node, otherwise NULL
} // TC --> O(2*max(len1, len2))
// SC --> O(1)

void printList(node* head) {
    while (head->next != NULL) {
        cout << head->num << "->";
        head = head->next;
    }
    cout << head->num << endl;
}

int main() {
    node* head = NULL;
    insertNode(head, 1);
    insertNode(head, 3);
    insertNode(head, 1);
    insertNode(head, 2);
    insertNode(head, 4);
    node* head1 = head;
    head = head->next->next->next;  
    node* headSec = NULL;
    insertNode(headSec, 3);
    node* head2 = headSec;
    headSec->next = head;  
    
    cout << "List1: ";
    printList(head1);
    cout << "List2: ";
    printList(head2);
    
    node* answerNode = intersectionPresent_Optimal2(head1, head2);
    if (answerNode == NULL) 
        cout << "No intersection\n";
    else 
        cout << "The intersection point is " << answerNode->num << endl;
    
    return 0;
}
