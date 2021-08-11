#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

void LLTraversal(struct Node *ptr){
    while(ptr!=NULL){
        printf("\nElement: %d",ptr->data);
        ptr=ptr->next;
    }
}

struct Node *insertAtStart(struct Node *head,int data){
    struct Node *ptr=(struct Node *)malloc(sizeof(struct Node));
    ptr->next=head;
    ptr->data=data;
    return ptr;
}

struct Node * insertAtEnd(struct Node *head, int data){
    struct Node * ptr = (struct Node *) malloc(sizeof(struct Node));
    ptr->data = data;
    struct Node * p = head;

    while(p->next!=NULL){
        p = p->next;
    }
    p->next = ptr;
    ptr->next = NULL;
    return head;
}

struct Node *insertAtIndex(struct Node *head,int data,int index){
    struct Node *ptr=(struct Node *)malloc(sizeof(struct Node));
    struct Node *p=head;
    int i=0;
    while(i!=index-1){
        p=p->next;
        i++;
    }
    ptr->data=data;
    ptr->next=p->next;
    p->next=ptr;
    return head;
}

struct Node *insertAfterNode(struct Node *head,struct Node *prevNode,int data){
    struct Node *ptr=(struct Node *)malloc(sizeof(struct Node));
    
    ptr->data=data;
    ptr->next=prevNode->next;
    prevNode->next=ptr;
    return head;
}

int main(){

    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;
    head=(struct Node *)malloc(sizeof(struct Node));
    second=(struct Node *)malloc(sizeof(struct Node));
    third=(struct Node *)malloc(sizeof(struct Node));
    fourth=(struct Node *)malloc(sizeof(struct Node));

    head->data=10;
    head->next=second;

    second->data=20;
    second->next=third;

    third->data=30;
    third->next=fourth;

    fourth->data=40;
    fourth->next=NULL;

    LLTraversal(head);
    // head=insertAtStart(head,50);
    // printf("\nInsertion at start");
    // printf("\nInsertion at Index");
    // head=insertAtIndex(head,50,2);
    // printf("\nInsertion at End");
    // head=insertAtEnd(head,50);
    printf("\nInsertion after the node");
    head=insertAfterNode(head,second,60);
    LLTraversal(head);
    
    return 0;
}