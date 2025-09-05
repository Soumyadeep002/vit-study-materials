// Infix to Postfix

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

struct stack {
    char data;
    struct stack *bottom;
};

struct stack * createNode() {
    return (struct stack *)malloc(sizeof(struct stack));
}

int isEmpty(struct stack *top) {
    return top == NULL;
}

struct stack *push(struct stack *top, char data) {
    struct stack * ptr = createNode();
    if (!ptr) {
        printf("Stack Overflowed!");
        return top;
    }
    ptr->data = data;
    ptr->bottom = top;
    return ptr;
}

char pop(struct stack **top) {
    if (isEmpty(*top)) {
        printf("Stack is empty!");
        return -1;
    }
    struct stack *ptr = *top;
    char data = ptr->data;
    *top = (*top)->bottom;
    free(ptr);
    return data;
}

char peek(struct stack *top) {
    return isEmpty(top) ? -1 : top->data;
}

int precedence(char op) {
    if (op == '+' || op == '-') return 1;
    if (op == '*' || op == '/') return 2;
    return 0;
}

int isOperator(char ch) {
    return ch == '+' || ch == '-' || ch == '*' || ch == '/';
}

void infixToPostfix(char *infix) {
    struct stack *opStack = NULL;
    char postfix[strlen(infix) + 1];
    int j = 0;

    for (int i = 0; i < strlen(infix); i++) {
        char ch = infix[i];
        if (isalnum(ch)) {
            postfix[j++] = ch;
        } else if (ch == '(') {
            opStack = push(opStack, ch);
        } else if (ch == ')') {
            while (!isEmpty(opStack) && peek(opStack) != '(') {
                postfix[j++] = pop(&opStack);
            }
            pop(&opStack); 
        } else if (isOperator(ch)) {
            while (!isEmpty(opStack) && precedence(peek(opStack)) >= precedence(ch)) {
                postfix[j++] = pop(&opStack);
            }
            opStack = push(opStack, ch);
        }
    }
    while (!isEmpty(opStack)) {
        postfix[j++] = pop(&opStack);
    }
    postfix[j] = '\0';
    printf("Postfix Expression: %s\n", postfix);
}

int main() {
    char infix[] = "a+b*c-d";
    printf("Infix Expression: %s\n", infix);
    infixToPostfix(infix);
    return 0;
}
