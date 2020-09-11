/* 
*  Insertion sort
*/

#include <iostream>
using namespace std;


void insertionSort(int *arr, int size) {
    int aux = 0;
    for (int i = 1; i < size; i++) {
        for (int j = i; j >= 0; j--) {
            if (arr[j] < arr[j-1]) {
                aux = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = aux;
            }
        }
        
    }
}

int main() {
    int arr[] = {7, 5, 6, 3, 2, 1};
    insertionSort(arr, 6);
    for (int i : arr) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}