#include <stdio.h>
#include <stdlib.h>

struct Node
{
    /* data */
    int data;
    struct Node *next; // Self referencing structure
};

void LLTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}

int main()
{
    // Header node declare
    struct Node *head; // Structure Pointer
    struct Node *second;
    struct Node *third;
    struct Node *fourth;
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    //Link first and second nodes
    head->data = 7;
    head->next = second;

    //Link second and third node
    second->data = 8;
    second->next = third;

    //Link Third Node and fourth node
    third->data = 9;
    third->next = fourth;

    //Termination at fourth node
    fourth->data=10;
    fourth->next=NULL;

    LLTraversal(head);

    return 0;
}
