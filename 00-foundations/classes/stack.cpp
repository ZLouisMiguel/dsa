#include <iostream>
using namespace std;

class Stack
{
public:
    int arr[5];
    int top = -1;

    void push(int x)
    {
        if (top == 4)
        {
            cout << "Stack Overflow \n";
            return;
        }
        arr[++top] = x;
    }

    void pop()
    {
        if (top == -1)
        {
            cout << "Stack Underflow \n";
            return;
        }
        top--;
    }

    void display()
    {
        for (int i = top; i >= 0; i--)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);

    cout << "Stack elements: ";
    s.display();
    s.pop();
    cout << "After pop: ";
    s.display();

    return 0;
}