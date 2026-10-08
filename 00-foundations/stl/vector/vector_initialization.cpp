#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vector1 = {1, 2, 3, 4, 5};
    vector<int> vector2 = {6, 7, 8, 9, 10};
    vector<int> vector3(5, 12);

    cout << "Vector 1: ";
    for (int num : vector1)
    {
        cout << num << " ";
    }
    cout << "\n";

    cout << "Vector 2: ";
    for (int num : vector2)
    {
        cout << num << " ";
    }
    cout << "\n";

    cout << "Vector 3: ";
    for (int num : vector3)
    {
        cout << num << " ";
    }
}