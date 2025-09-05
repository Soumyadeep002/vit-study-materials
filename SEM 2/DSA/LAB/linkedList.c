#include<stdio.h>
#include<stdlib.h>

struct LinkedList
{
    int data;
    struct LinkedList * next;
};

struct LinkedList * createNode(){
    return (struct LinkedList *)malloc(sizeof(struct LinkedList));
}

struct LinkedList * insertAtBegining(struct LinkedList * head, int data){
    struct LinkedList * ptr = createNode();
    ptr->data = data;
    ptr->next = head;

    return ptr;
}

struct LinkedList * insertAtEnd(struct LinkedList * head, int data){
    struct LinkedList * ptr = createNode();
    struct LinkedList * p = head;
    ptr->data = data;
    while(p->next != NULL)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = NULL;
    return head;
}

struct LinkedList * deleteFromStart(struct LinkedList * head){
    struct LinkedList * ptr = head;
    head = head->next;
    free(ptr);
    return head;
}

struct LinkedList * deleteFromEnd(struct LinkedList * head){
    struct LinkedList * ptr = createNode();
    ptr = head;
    while(ptr->next->next != NULL){
        ptr = ptr->next;
    }
    ptr->next = NULL;
    free(ptr->next);
    return head;
}


void traverseList(struct LinkedList * ptr){
    if(ptr != NULL){
        printf(" %d ->", ptr->data);
        traverseList(ptr->next);
    }
}


int main(){
    struct LinkedList * head;
    struct LinkedList * second;
    struct LinkedList * third;
    struct LinkedList * fourth;

    head = createNode();
    second = createNode();
    third = createNode();
    fourth = createNode();

    head->data =5;
    head->next = second;

    second->data = 10;
    second->next = third;

    third->data = 15;
    third->next = fourth;

    fourth->data = 20;
    fourth->next = NULL;

    head = insertAtBegining(head, 45);

    head = insertAtEnd(head, 67);
    head = insertAtEnd(head, 100);
    head = deleteFromStart(head);
    head = deleteFromEnd(head);
    head = deleteFromEnd(head);

    traverseList(head);

    return 0;

}