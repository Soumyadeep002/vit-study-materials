#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node * next;
};

struct node * createNode(){
    return (struct node *)malloc(sizeof(struct node));
}

void traverseList(struct node * ptr){
    while(ptr!=NULL)
    {
        printf("%d -> ", ptr->data);
        ptr = ptr->next;
    }
}

struct node * insertFirst(struct node * ptr, int data){
    struct node * temp = createNode();
    temp->data=data;
    temp->next=ptr;
    return temp;
}

struct node * insertLast(struct node *ptr, int data){
    struct node * head = ptr;
    while (head->next != NULL)
    {
        head = head->next;
    }
    struct node * temp = createNode();
    head->next = temp;
    temp->data=data;
    temp->next=NULL;

    return ptr;
}

struct node * deleteFromEnd(struct node * head){
    struct node * ptr = head;
    while (ptr->next->next != NULL)
    {
        ptr = ptr->next;
    }
    struct node * temp = ptr->next;
    ptr->next = NULL;
    free(temp);
    return head;
}

struct node * deleteFromStart(struct node * head){
    struct node * ptr = head;
    head = head->next;
    free(ptr);
    return head;
}

int main(){
    struct node * head = createNode();
    struct node * second = createNode();
    head->data=4;
    head->next=second;

    second->data=2;
    second->next=NULL;
   
    traverseList(head);
    printf("\n");
    head = insertLast(head, 67);
    head = insertLast(head, 37);
    head = insertFirst(head, 45);
    traverseList(head);
    printf("\n");
    head = deleteFromEnd(head);
    traverseList(head);
    printf("\n");
    head = deleteFromStart(head);
    traverseList(head);
    return 0;
}