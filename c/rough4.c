struct Node {
    int data;
    struct Node* next;
};

struct Node* reverseList(struct Node* head) {
    struct Node *prev = NULL;
    struct Node *curr = head;
    struct Node *next = NULL;

    while (curr != NULL) {
        next = curr->next;  // Store the rest of the list
        curr->next = prev;  // Flip the pointer "backward"
        
        // Move pointers forward for the next iteration
        prev = curr;
        curr = next;
    }

    return prev; // prev is the new head of the reversed list
}
