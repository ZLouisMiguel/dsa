#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int x)
    {
        this->data = x;
        next = nullptr;
    }
};

class Queue
{
    Node *head;
    Node *tail;
    int size;

public:
    Queue()
    {
        head = nullptr;
        tail = nullptr;
        size = 0;
    }

    int getSize()
    {
        return size;
    }

    bool isEmpty()
    {
        return size == 0;
    }

    void enqueue(int el)
    {
        Node *n = new Node(el);
        if (head == nullptr)
        {
            head = n;
            tail = n;
        }
        else
        {
            tail->next = n;
            tail = n;
        }
        size++;
    }

    void dequeue()
    {
        if (isEmpty())
            return;

        Node *temp = head;
        head = head->next;
        temp->next = nullptr;
        delete temp;
        size--;
    }

    void display()
    {
        Node *temp = head;

        while (temp != nullptr)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
    }

    // void display2() {
    //     while(!q.isEmpty()) {
    //         cout << q.front() << "\n";
    //         q.dequeue();
    //     }
    // }
    
};