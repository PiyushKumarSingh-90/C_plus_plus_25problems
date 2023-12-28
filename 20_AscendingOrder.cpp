// Create a program that checks if an array is sorted in ascending order.

#include <iostream>
using namespace std;

bool isSortedAscending(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    const int maxSize = 100; // Maximum size of the array
    int arr[maxSize];
    int size;

    // Ask the user for input
    cout << "Enter the size of the array: ";
    cin >> size;

    // Validate input
    if (size <= 0 || size > maxSize) {
        cout << "Invalid array size." << endl;
        return 1; // Exit with an error code
    }

    // Ask the user to enter the array elements
    cout << "Enter the array elements:" << endl;
    for (int i = 0; i < size; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }

    // Check if the array is sorted in ascending order
    bool sorted = isSortedAscending(arr, size);

    // Print the result
    if (sorted) 
    {
        cout << "The array is sorted in ascending order." << endl;
    }
    else 
    {
        cout << "The array is not sorted in ascending order." << endl;
    }

    return 0;
}