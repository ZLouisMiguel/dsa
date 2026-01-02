#include "arrayStack.h"
#include "iostream"
using namespace std;

int main() {
    arrayStack s(3);
    s.push(10);
    s.push(20);
    cout << s.getTop() << "\n"; 
    s.pop();
    cout << s.getTop() << "\n"; 
}
