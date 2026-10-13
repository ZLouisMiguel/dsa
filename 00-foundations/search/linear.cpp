#include <iostream>
#include <vector>
using namespace std;

int search(vector<int> &arr, int x)
{
    for (int i = 0; i < arr.size(); i++)
        if (arr[i] == x)
            return i;

    return -1;
}

int main()
{
    vector<int> arr = {2, 3, 4, 10, 40};
    int x = 10;
    int res = search(arr, 10);
    if (res == -1)
        cout << "Element isn't present in the array \n";
    else
        cout << "Element is present at index " << res << "\n";

    return 0;
}

// Ternary Search .