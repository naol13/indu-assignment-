#include <iostream>
using namespace std;

void merge(int* arr[], int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;    

    int* leftArray[n1];
    int* rightArray[n2];

    for (int i = 0; i < n1; i++)
        leftArray[i] = arr[left + i];
    for (int j = 0; j < n2; j++)
        rightArray[j] = arr[mid + 1 + j];
    int i = 0;
    int j = 0; 
    int k = left; 

    while (i < n1 && j < n2) {
        if (*leftArray[i] <= *rightArray[j]) {
            arr[k] = leftArray[i];
            i++;
        } else {
            arr[k] = rightArray[j];
            j++;
        }
        k++;
    }
    while (i < n1) {
        arr[k] = leftArray[i];
        i++;
        k++;
    }
    while (j < n2) {
        arr[k] = rightArray[j];
        j++;
        k++;
    }
}

void pointerMergeSort(int* arr[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2; 
        pointerMergeSort(arr, left, mid);
        pointerMergeSort(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }
}

int main() {
    int values[] = {5, 2, 4, 6, 1, 3};
    const int n = sizeof(values) / sizeof(values[0]);
    
    int* ptrArray[n]; 
    for (int i = 0; i < n; i++) {
        ptrArray[i] = &values[i]; 
    }

    pointerMergeSort(ptrArray, 0, n - 1);

    cout << "Sorted values: ";
    for (int i = 0; i < n; i++) {
        cout << *ptrArray[i] << " "; 
    }
    cout << endl;

    return 0;
}