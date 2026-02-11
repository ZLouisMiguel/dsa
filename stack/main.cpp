#include "array/arrayStack.h"
#include "array/genericArrayStack.h"
#include <iostream>

using namespace std;

int main()
{
    arrayStack s(3);
    genericArrayStack<int> gs(10);

    cout << "This is where we're doing the array stack imp \n";
    s.push(10);
    s.push(20);
    cout << s.getTop() << "\n";
    s.pop();
    cout << s.getTop() << "\n";

    cout << "This is where we're doing the generic array stack imp \n";
    gs.push(10);
    gs.push(20);
    cout << gs.getTop() << "\n";
    gs.pop();
    cout << gs.getTop() << "\n";
}
