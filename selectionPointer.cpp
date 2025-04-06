#include <iostream>
using namespace std;

void pointerSelectionSort(int* arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int* minPtr = arr[i];
        int minIndex = i;

        for (int j = i + 1; j < n; j++) {
            if (*arr[j] < *minPtr) {
                minPtr = arr[j];
                minIndex = j;
            }
        }
        if (minIndex != i) {
            int* temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }
}

int main() {
    int values[] = {5, 2, 4,11,10,6, 1, 3};
    const int n = sizeof(values) / sizeof(values[0]);
    
    int* ptrArray[n]; 
    for (int i = 0; i < n; i++) {
        ptrArray[i] = &values[i]; 
    }

    pointerSelectionSort(ptrArray, n);
    cout << "Sorted values: ";
    for (int i = 0; i < n; i++) {
        cout << *ptrArray[i] << " "; 
    }
    cout << endl;

    return 0;
}