#include <iostream>
#include <string>
using namespace std;

template <class T>
class AddElements
{
    T element;

public:
    AddElements(T arg) : element(arg) {}
    T add(T other) { return other + element; };
};

template <>
class AddElements<string>
{
    string element;

public:
    AddElements(string arg) : element(arg) {};
    string concatenate(string other)
    {
        return element + other;
    };
};