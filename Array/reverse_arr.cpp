
#include<iostream>
using namespace std;

void reverseArray(int arr[], int size) {
    int start = 0, end = size - 1;

    // Swap the elements until the pointers meet in the middle
    while (start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main() {
    int size;

    // Input size of the array
    cout << "Enter the size of the array: ";
    cin >> size;

    // Declare an array with the input size
    int arr[100]; // Set the size limit to 100, assuming a maximum size

    // Input elements of the array
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    // Display the array before swapping
    cout << "Before Swap: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Reverse the array
    reverseArray(arr, size);

    // Display the array after swapping
    cout << "After Swap: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
