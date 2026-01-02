#include "arrayStack.h"

void arrayStack::expandArr()
{
    int *temp = new int[size * 2];
    for (int i = 0; i < size; i++)
        temp[i] = arr[i];
    delete[] arr;
    arr = temp;
    size *= 2;
}

arrayStack::arrayStack(int s) : size(s), top(-1)
{
    arr = new int[size];
}

arrayStack::~arrayStack()
{
    delete[] arr;
}

int arrayStack::getSize()
{
    return top + 1;
}

void arrayStack::push(int value)
{
    if (top + 1 == size)
        expandArr();
    arr[++top] = value;
}

void arrayStack::pop()
{
    if (!isEmpty())
    {
        top--;
    }
    else
    {
        cout << "The stack is empty, can't pop\n";
    }
}

bool arrayStack::isEmpty()
{
    return top == -1;
}

int arrayStack::getTop()
{
    if (isEmpty())
    {
        cout << "The stack is empty\n";
        return -1;
    }
    return arr[top];
}
