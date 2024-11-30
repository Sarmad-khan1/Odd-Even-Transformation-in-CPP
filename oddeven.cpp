#include <iostream>
using namespace std;

void evenOddTransform(int array[], int size, int n) {
    // Perform the transformation n times
    for (int t = 0; t < n; t++) {
        for (int i = 0; i < size; i++) {
            if (array[i] % 2 == 0) {
                // If the number is even, subtract 2
                array[i] -= 2;
            } else {
                // If the number is odd, add 2
                array[i] += 2;
            }
        }
    }
}

int main() {
    int size, n;
    
    // Input size and number of transformations
    cout << "Enter size of the array: ";
    cin >> size;
    int array[size];
    
    // Input array elements
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; i++) {
        cin >> array[i];
    }
    
    // Input number of transformations
    cout << "Enter number of transformations (n): ";
    cin >> n;
    
    // Call the transformation function
    evenOddTransform(array, size, n);
    
    // Output the transformed array
    cout << "Transformed Array: ";
    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
    
    return 0;
}
