
#include <iostream>
using namespace std;

void swapMinMax(int arr[], int n) {
    // Find the indices of the minimum and maximum elements
    int minIndex = 0, maxIndex = 0;

    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[minIndex]) {
            minIndex = i;
        }
        if (arr[i] > arr[maxIndex]) {
            maxIndex = i;
        }
    }

    // Swap the minimum and maximum elements
    int temp = arr[minIndex];
    arr[minIndex] = arr[maxIndex];
    arr[maxIndex] = temp;
}

int main() {
    int n;

    // Input size of the array
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    
    // Input elements of the array
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Swap min and max elements
    swapMinMax(arr, n);

    // Output the modified array
    cout << "Array after swapping the min and max elements: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}





