/* 
*  Selection sort
*/

#include <iostream>
using namespace std;


void selectionSort(int *arr, int size) {
    int aux = 0,
        min_index = 0;
    for (int i = 0; i < size-1; i++) {
        min_index = i;
        for (int j = i+1; j < size; j++) {
            if (arr[j] < arr[min_index]) {
                min_index = j;
            }
        }
        aux = arr[i];
        arr[i] = arr[min_index];
        arr[min_index] = aux;
    }
}

int main() {
    int arr[] = {7, 5, 6, 3, 2, 1};
    selectionSort(arr, 6);
    for (int i : arr) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}