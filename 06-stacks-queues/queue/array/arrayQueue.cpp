#ifndef QUEUE_H
#define QUEUE_H

#include <iostream>

template <typename T>
class Queue
{
private:
    int n;
    T *arrQueue;
    int front, rear;

public:
    Queue(int size = 100) : n(size), front(-1), rear(-1)
    {
        arrQueue = new T[n];
    }

    ~Queue()
    {
        delete[] arrQueue;
    }

    void enqueue(const T &data)
    {
        if (rear == n - 1)
        {
            std::cout << "Queue overflow\n";
            return;
        }

        if (front == -1)
            front = 0;

        arrQueue[++rear] = data;
    }

    void dequeue()
    {
        if (front == -1 || front > rear)
        {
            std::cout << "Queue underflow\n";
            return;
        }

        front++;

        if (front > rear)
            front = rear = -1;
    }

    T getFront() const
    {
        if (!isEmpty())
        {
            return arrQueue[front];
        }
        else
        {
            std::cout << "Queue is empty\n";
            return T{}; // default value for any type
        }
    }

    bool isEmpty() const
    {
        return front == -1;
    }

    void display() const
    {
        if (isEmpty())
        {
            std::cout << "The queue is empty\n";
            return;
        }

        for (int i = front; i <= rear; i++)
            std::cout << arrQueue[i] << " ";

        std::cout << "\n";
    }

    void dequeueShift()
    {
        if (front == -1)
        {
            std::cout << "Queue Underflow/Empty\n";
            return;
        }

        std::cout << "Element deleted from queue is : "
                  << arrQueue[front] << "\n";

        for (int i = front; i < rear; i++)
            arrQueue[i] = arrQueue[i + 1];

        rear--;

        if (rear < front)
            front = rear = -1;
    }
};

#endif
