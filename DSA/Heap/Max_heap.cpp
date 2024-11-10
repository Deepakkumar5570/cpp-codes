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

    // Delete the root element (max element in a max heap)
    void deleteRoot() {
        if (size == 0) {
            cout << "Heap is empty, no element to delete\n";
            return;
        }

        // Step 1: Replace root with the last element
        arr[0] = arr[size - 1];
        size--;

        // Step 2: Heapify down from the root to restore heap property
        int index = 0;
        while (index < size) {
            int leftChild = 2 * index + 1;
            int rightChild = 2 * index + 2;
            int largest = index;

            // Find the largest among index, left child, and right child
            if (leftChild < size && arr[leftChild] > arr[largest]) {
                largest = leftChild;
            }
            if (rightChild < size && arr[rightChild] > arr[largest]) {
                largest = rightChild;
            }

            // If the largest is not the parent, swap and continue heapifying
            if (largest != index) {
                swap(arr[index], arr[largest]);
                index = largest;
            } else {
                break;
            }
        }

        cout << "Root element deleted\n";
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
    H1.insert(7);

    cout << "Heap after insertion:\n";
    H1.print();

    H1.deleteRoot();  // Deleting the root
    cout << "Heap after deleting root:\n";
    H1.print();

    return 0;
}
