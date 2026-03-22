#include <stdio.h>
#include <stdlib.h>

// 1. Define the structure normally
typedef struct node {
    int data;
    struct node *next;
} Node; // Now 'Node' refers to the struct itself, not a pointer.

// Global Head pointer
Node *Head = NULL;

// 2. Function to create and add a node to the end
void createnode() {
    // We use Node* because we need a pointer to the memory malloc allocates
    Node *temp = (Node *)malloc(sizeof(Node));
    
    if (temp == NULL) {
        printf("Memory allocation failed!\n");
        return;
    }

    printf("Enter the data: ");
    scanf("%d", &temp->data);
    temp->next = NULL; // New last node always points to NULL

    // If list is empty, this is the first node
    if (Head == NULL) {
        Head = temp;
    } 
    else {
        // Traverse to the current last node
        Node *temp1 = Head;
        while (temp1->next != NULL) {
            temp1 = temp1->next;
        }
        // Link the old last node to our new node
        temp1->next = temp;
    }
}

// 3. Function to print the list
void display() {
    Node *p = Head;
    printf("\nLinked List: ");
    while (p != NULL) {
        printf("%d -> ", p->data);
        p = p->next;
    }
    printf("NULL\n");
}

int main() {
    int n;
    printf("How many nodes do you want to create? ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        createnode();
    }

    display();
    return 0;
}
