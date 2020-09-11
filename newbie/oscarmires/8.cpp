/*
*  Bubble sort
*/

#include <iostream>
using namespace std;


void bubbleSort(int *arr, int size) {
    int aux = 0;
    bool isOrdered = false;
    for (int i = 0; i < size-1 && !isOrdered; i++) {
        isOrdered = true;
        for (int j = 0; j < size-1-i; j++) {
            if (arr[j] > arr[j+1]) {
                aux = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = aux;
                isOrdered = false;
            }
        }
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6};
    bubbleSort(arr, 6);
    for (int i : arr) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}