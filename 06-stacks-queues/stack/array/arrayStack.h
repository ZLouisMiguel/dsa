#ifndef STACK_H
#define STACK_H

#include <iostream>
using namespace std;

class arrayStack
{
private:
    int top;
    int size;
    int *arr;
    void expandArr();

public:
    arrayStack(int s = 5);
    ~arrayStack();

    int getSize();
    void push(int value);
    void pop();
    bool isEmpty();
    int getTop();
};

#endif
