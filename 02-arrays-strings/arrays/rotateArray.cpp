#include <iostream>
#include <vector>
using namespace std;

void printArray(vector<int> array)
{
    for (int el : array)
    {
        cout << el << " ";
    }

    cout << "\n";
}

vector<int> rotateLeft(int d, vector<int> arr)
{
    int len = arr.size();
    if (d == len)
        return arr;
    d %= len;

    for (int i = 0; i < d; i++)
    {
        int first = arr[0];
        for (int i = 0; i < len - 1; i++)
        {
            arr[i] = arr[i + 1];
        }
        arr[len - 1] = first;
        printArray(arr);
    }

    return arr;
}

int main()
{
    vector<int> array = {1, 2, 3, 4, 5};
    vector<int> result = rotateLeft(4, array);
    printArray(result);

    return 0;
}