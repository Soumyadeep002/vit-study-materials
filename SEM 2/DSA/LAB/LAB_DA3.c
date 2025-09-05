// implementation of stack using linked list

#include<stdio.h>
#include<stdlib.h>

struct stack
{
    int data;
    struct stack * bottom;
};

struct stack * createNode(){
    return (struct stack *)malloc(sizeof(struct stack));
}

int isEmpty(struct stack * top){
    if (top == NULL){
        return 1;
    }else{
        return 0;
    }
}

int isFull(struct stack * top){
    struct stack * ptr = createNode();
    if (!ptr){
        return 1;
    }else{
        return 0;
    }
}

struct stack * push(struct stack * top, int data){
    if (isFull(top)){
        printf("Stack Overflowed !");
    }else{
        struct stack * ptr = createNode();
        ptr->data = data;
        ptr->bottom = top;
        top = ptr;
        return top;
    } 
}

void pop(struct stack ** top){
    if (isEmpty(*top)){
        printf("Stack is empty !");
    }
    else{
        struct stack * ptr = *top;
        *top = (*top)->bottom;
        int data =  ptr->data;
        free(ptr);
        printf("Popped element is: %d\n \n", data);
    }
}

void traverseStack(struct stack * ptr){
    if(ptr != NULL){
        printf("Ele: %d \n", ptr->data);
        traverseStack(ptr->bottom);
    }
}


int main(){

    struct stack * top = NULL;

    printf("Initial stack is:\n");
    traverseStack(top);

    printf("\n\n");

    printf("Pushing elements in stack:\n");
    top = push(top, 5);
    top = push(top, 10);
    top = push(top, 67);
    top = push(top, 12);
    top = push(top, 1);
    traverseStack(top);

    printf("\n\n");


    printf("Popping elements from stack:\n");
    pop(&top);
    traverseStack(top);
    printf("\n\n");
    pop(&top);
    traverseStack(top);
    return 0;
}
