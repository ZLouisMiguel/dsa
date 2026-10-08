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

void merge(int leftArray[] , int leftSize , int rightArray[], int rightSize, int array[] , int arraySize) {
  
    int i = 0 , l = 0 , r = 0;

    while(l < leftSize && r < rightSize) {
        if(leftArray[l] < rightArray[r]) {
            array[i] = leftArray[l];
            i++;
            l++;
        }else {
            array[i] = rightArray[r];
            i++;
            r++;
        }
    }

    while(l < leftSize ){
        array[i] = leftArray[l];
        i++; l++;
    }

    while(r < rightSize ){
        array[i] = rightArray[r];
        i++; r++;
    }

}

void mergeSort(int array[], int size)
{
    if(size <= 1) return;

    int middle = size / 2;
    int* leftArray = new int[middle];
    int* rightArray = new int[size - middle]; 


    int i = 0; //left array
    int j = 0; //right array

    for(;i < size; i++) {
        if(i<middle) {
            leftArray[i] = array[i];
        }else {
            rightArray[i - middle] = array[i];
            j++;
        }
    }


    mergeSort(leftArray, middle);
    mergeSort(rightArray, size-middle);
    merge(leftArray, middle, rightArray, size-middle , array, size);

    delete[] leftArray;
    delete[] rightArray;

}



int main()
{

    int array[] = {8, 2, 5, 3, 9, 4, 7, 6, 1, 0};

    printArray(array, 10);
    mergeSort(array, 10);
    printArray(array, 10);

    return 0;
}
