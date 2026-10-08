#include <iostream>
using namespace std;

void printArray(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    cout << "\n";
}

void selectionSort(int array[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        int min = i;
        for (int j = i + 1; j < size; j++)
        {
            if (array[min] > array[j])
            {
                min = j;
            }
        }
        int temp = array[i];
        array[i] = array[min];
        array[min] = temp;
    }
}

int main()
{

    int array[] = {8, 2, 5, 3, 9, 4, 7, 6, 1, 0};

    printArray(array, 10);
    selectionSort(array, 10);
    printArray(array, 10);

    return 0;
}