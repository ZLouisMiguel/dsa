#include <iostream>
using namespace std;

class Queue
{
private:
    int n;
    int *arrQueue;
    int front, rear;

public:
    Queue(int size = 100) : n(size), front(-1), rear(-1)
    {
        arrQueue = new int[n];
    }

    ~Queue()
    {
        delete[] arrQueue;
    }

    void enqueue(int data)
    {
        if (rear == n - 1)
        {
            cout << "Queue overflow\n";
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
            cout << "Queue underflow\n";
            return;
        }

        front++;

        if (front > rear)
            front = rear = -1;
    }

    int getFront() const 
    {
        if (!isEmpty())
        {
            return arrQueue[front];
        }
        else
        {
            cout << "Queue is empty\n";
            return -1;
        }
    }

    bool isEmpty() const 
    {
        return (front == -1);
    }

    void display() const 
    {
        if (isEmpty())
        {
            cout << "The queue is empty \n";
            return;
        }
        for (int i = front; i <= rear; i++)
        {
            cout << arrQueue[i] << " ";
        }
        cout << "\n";
    }

    void dequeueShift()
    {
        if (front == -1)
        {
            cout << "Queue Underflow/Empty ";
            return;
        }
        cout << "Element deleted from queue is : " << arrQueue[front] << endl;
        for (int i = front; i < rear; i++)
        {
            arrQueue[i] = arrQueue[i + 1];
        }
        rear--;
     
        if(rear < front) {
            front = rear = -1;
        }
    }
};
