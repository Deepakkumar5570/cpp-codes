#include<iostream>
using namespace std;

class MaxHeap {
    int* arr;
    int size;        // total elements in heap
    int total_size;  // total element capacity of the array

public:
    MaxHeap(int n) {
        arr = new int[n];
        size = 0;
        total_size = n;
    }

    // Insert into the heap
    void insert(int value) {
        // Check if heap size is available or not
        if (size == total_size) {
            cout << "Heap overflow\n";
            return;
        }
        
        arr[size] = value;
        int index = size;  // Index where the value is inserted
        size++;

        // Compare with its parent and move the value up if necessary (heapify)
        while (index > 0 && arr[(index - 1) / 2] < arr[index]) {
            // Swap with the parent if the current value is larger
            swap(arr[(index - 1) / 2], arr[index]);
            index = (index - 1) / 2;
        }

        cout << value << " is inserted into the heap\n";
    }

    // Print the heap
    void print() {
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    MaxHeap H1(6);

    H1.insert(4);
    H1.insert(14);
    H1.insert(11);

    H1.print();

    return 0;
}
