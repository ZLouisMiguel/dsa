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
        // temp->next = nullptr;
        delete temp;
        size--;
    }

    void display()
    {
        Node *temp = head;
        cout << "\n";
        while (temp != nullptr)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
    }

    int front()
    {
        return head->data;
    }

    void display2(Queue *q)
    {
        cout << "\n";
        while (!q->isEmpty())
        {
            cout << q->front() << "\n";
            q->dequeue();
        }
    }
};

int main()
{
    Queue *q = new Queue();

    q->enqueue(10);
    q->enqueue(20);
    q->enqueue(30);
    q->enqueue(40);
    q->enqueue(50);
    q->display();

    q->dequeue();
    q->display();

    q->display2(q);
    q->display();

    return 0;
}