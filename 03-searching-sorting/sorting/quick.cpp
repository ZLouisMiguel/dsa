#include <iostream>
using namespace std;

int partition(int array[], int start, int end)
{
    int pivot = array[end];
    int i = start - 1;

    for (int j = start; j < end ; j++)
    {
        if (array[j] < pivot)
        {
            i++;
            int temp = array[i];
            array[i] = array[j];
            array[j] = temp;
        }
    }
    i++;

    int temp = array[i];
    array[i] = array[end];
    array[end] = temp;

    return i;
}

void quickSort(int array[], int start, int end)
{
    if (end <= start)
        return;

    int pivot = partition(array, start, end);
    quickSort(array, start, pivot - 1);
    quickSort(array, pivot + 1, end);
}

void printArray(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    cout << "\n";
}

int main()
{

    int array[] = {8, 2, 5, 3, 9, 4, 7, 6, 1, 0};

    printArray(array, 10);
    quickSort(array, 0, 9);
    printArray(array, 10);

    return 0;
}
