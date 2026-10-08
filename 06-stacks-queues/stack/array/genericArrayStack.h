#ifndef ARRAY_STACK_H
#define ARRAY_STACK_H

#include <iostream>

template <typename T>
class genericArrayStack
{
private:
    int top;
    int size;
    T* arr;

    void expandArr()
    {
        T* temp = new T[size * 2];
        for (int i = 0; i < size; i++)
            temp[i] = arr[i];

        delete[] arr;
        arr = temp;
        size *= 2;
    }

public:
    genericArrayStack(int s = 5) : top(-1), size(s)
    {
        arr = new T[size];
    }

    ~genericArrayStack()
    {
        delete[] arr;
    }

    int getSize() const
    {
        return top + 1;
    }

    bool isEmpty() const
    {
        return top == -1;
    }

    void push(const T& value)
    {
        if (top + 1 == size)
            expandArr();
        arr[++top] = value;
    }

    void pop()
    {
        if (!isEmpty())
            top--;
        else
            std::cout << "The stack is empty, can't pop\n";
    }

    T getTop() const
    {
        if (isEmpty())
        {
            std::cout << "The stack is empty\n";
            return T{}; 
        }
        return arr[top];
    }
};

#endif
