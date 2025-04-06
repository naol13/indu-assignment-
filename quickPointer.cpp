#include <iostream>
using namespace std;

void swap(int** a, int** b) {
    int* temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int* arr[], int low, int high) {
    int* pivot = arr[high]; 
    int i = (low - 1); 

    for (int j = low; j < high; j++) {
        if (*arr[j] <= *pivot) {
            i++; 
            swap(&arr[i], &arr[j]); 
        }
    }
    swap(&arr[i + 1], &arr[high]); 
    return (i + 1); 
}


void pointerQuickSort(int* arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        pointerQuickSort(arr, low, pi - 1);
        pointerQuickSort(arr, pi + 1, high);
    }
}

int main() {
    int values[] = {5, 2, 4, 6, 1, 3};
    const int n = sizeof(values) / sizeof(values[0]);
    
    int* ptrArray[n]; 
    for (int i = 0; i < n; i++) {
        ptrArray[i] = &values[i]; 
    }
    
    pointerQuickSort(ptrArray, 0, n - 1);

    cout << "Sorted values: ";
    for (int i = 0; i < n; i++) {
        cout << *ptrArray[i] << " "; 
    }
    cout << endl;

    return 0;
}