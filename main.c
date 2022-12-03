#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int *dataPtr;
    struct node *next;
} Node;
void printList(Node *);
void addList(Node *, int);
void addFirst(Node *, int);
int main()
{
    Node *head = NULL; // allocate 3 nodes in the heap
    head = (struct Node *)malloc(sizeof(Node));
    head->dataPtr = 1; // assign data in first node
    head->next = NULL; // allocate 3 nodes in the heap
    addList(head, 8);
    addList(head, 5);
    printList(head);

    return 0;
}

void printList(Node *node)
{
    while (node != NULL)
    {
        printf("%d\n", node->dataPtr);
        node = node->next;
    }
}
void addList(Node *node, int data)
{
    if (node == NULL)
        exit(1);

    Node *newNode = NULL;
    newNode = (struct Node *)malloc(sizeof(Node));
    newNode->dataPtr = data;
    newNode->next = NULL;
    while (node->next != NULL)
        node = node->next;

    node->next = newNode;
}