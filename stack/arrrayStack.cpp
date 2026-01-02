#include "arrayStack.h"


void Stack::expandArr() {
    int *temp = new int[size * 2];
    for (int i = 0; i < size; i++)
        temp[i] = arr[i];
    delete[] arr;
    arr = temp;
    size *= 2;
}

Stack::Stack(int s) : size(s), top(-1) {
    arr = new int[size];
}

Stack::~Stack() {
    delete[] arr;
}

int Stack::getSize() {
    return top + 1;
}

void Stack::push(int value) {
    if (top + 1 == size)
        expandArr();
    arr[++top] = value;
}

void Stack::pop() {
    if (!isEmpty()) {
        top--;
    } else {
        cout << "The stack is empty, can't pop\n";
    }
}

bool Stack::isEmpty() {
    return top == -1;
}

int Stack::getTop() {
    if (isEmpty()) {
        cout << "The stack is empty\n";
        return -1;
    }
    return arr[top];
}
