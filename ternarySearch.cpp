#include <iostream>
using namespace std;

int ternarySearch(int arr[], int size) {
    int low = 0, high = size - 1;

    while (high - low > 2) { 
        int mid1 = low + (high - low) / 3; 
        int mid2 = high - (high - low) / 3; 
        if (arr[mid1] < arr[mid2]) {
            low = mid1; 
        } else {
            high = mid2; 
        }
    }
    int maxVal = arr[low];
    for (int i = low + 1; i <= high; i++) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        }
    }
    return maxVal;
}

int main() {
    int arr[] = {1, 3, 5, 7, 9, 11, 10, 36, 6, 4, 2}; 
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "maximum value in the array is " << ternarySearch(arr, size) << endl;

    return 0;
}