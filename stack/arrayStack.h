#ifndef STACK_H
#define STACK_H

#include <iostream>
using namespace std;

class Stack {
private:
    int top;
    int size;
    int *arr;
    void expandArr();

public:
    Stack(int s = 5);
    ~Stack();

    int getSize();
    void push(int value);
    void pop();
    bool isEmpty();
    int getTop();
};

#endif
