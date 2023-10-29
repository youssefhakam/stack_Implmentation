#pragma once
#ifndef STACK_H
#define STACK_H

#define MAX 10
#define DATA_TYPE char

typedef struct {
    DATA_TYPE elements[MAX];
    int TOP;
} Stack;

void Init(Stack* ptr_stack) {
    ptr_stack->TOP = -1;
}

int isFull(Stack* ptr_stack) {
    if (ptr_stack->TOP == MAX - 1) {
        return 1;
    }
    else {
        return 0;
    }
}

int isEmpty(Stack* ptr_stack) {
    if (ptr_stack->TOP == -1) {
        return 1;
    }
    else {
        return 0;
    }
}

int Push(DATA_TYPE element, Stack* ptr_stack) {
    if (isFull(ptr_stack) == 1) {
        return 0;
    }
    else {
        ptr_stack->TOP++;
        ptr_stack->elements[ptr_stack->TOP] = element;
        return 1;
    }
}

int Pop(DATA_TYPE* ptr_element, Stack* ptr_stack) {
    if (isEmpty(ptr_stack) == 1) {
        return 0;
    }
    else {
        *ptr_element = ptr_stack->elements[ptr_stack->TOP];
        ptr_stack->TOP--;
        return 1;
    }
}

int StackSize(Stack* ptr_stack) {
    if (ptr_stack->TOP == -1) {
        return 0;
    }
    else {
        return (ptr_stack->TOP + 1);
    }
}

#endif
