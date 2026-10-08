#include <iostream>
using namespace std;

template <typename T>
class Node
{
public:
    T data;
    Node<T> *next;
    Node(T value)
    {
        data = value;
        next = nullptr;
    }
};

template <typename V>
class Stack
{
private:
    Node<V> *head;
    int size;

public:
    Stack()
    {
        head = nullptr;
        size = 0;
    }

    ~Stack()
    {
        Node<V> *temp = head;
        Node<V> *curr = nullptr;
        while (temp->next != nullptr)
        {
            curr = temp->next;
            delete temp;
            temp = curr;
        }
        head = nullptr;
        size = 0;
    }

    void push (const V& value) {
        Node<V>* temp = new Node(value);
        temp->next = head;

    }
};