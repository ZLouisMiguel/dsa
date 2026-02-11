#include <iostream>
using namespace std;

template <typename T>
class Node
{
public:
    T data;
    Node<T> *next;

    Node(T data)
    {
        this->data = data;
        next = nullptr;
    }
};

template <typename T>
class Stack
{
    Node<T> *head;
    int size;

public:
    Stack()
    {
        head = nullptr;
        size = 0;
    }

    bool isEmpty()
    {
        return head == nullptr;
    }

    void push(T val)
    {
        Node<T> *temp = new Node(val);
        temp->next = head;
        head = temp;
        size++;
    }

    void pop()
    {
        if (isEmpty())
            return;
        Node<T> *temp = head;
        head = head->next;
        delete temp;
        size--;
    }

    T top()
    {
        return head->data;
    }

    void display()
    {
        Node<T> *temp = head;
        while (temp != nullptr)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
    }
};

int main()
{
    Stack<int> s;
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6);
    s.display();
}