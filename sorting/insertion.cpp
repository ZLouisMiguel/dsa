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

void insertionSort(int array[], int size) {
    for(int i = 1 ; i < size ; i++) {
        int temp = array[i];
        int j = i - 1;
        
        while(j >= 0 && array[j] > temp) {
          array[j+1] = array[j];
          j--;
        }

        array[j+1] = temp;
    }
}


int main()
{

    int array[] = {8, 2, 5, 3, 9, 4, 7, 6, 1, 0};

    printArray(array, 10);
    insertionSort(array, 10);
    printArray(array, 10);

    return 0;
}