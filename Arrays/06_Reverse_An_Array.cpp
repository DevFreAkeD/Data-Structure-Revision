#include <iostream>

int main()
{
    // 1D array declaration and initialization
    int arr[5] = {15, 25, 35, 45, 55};

    // Printing the original elements of the array
    std::cout << "Original Array: ";
    for (int i = 0; i < 5; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    // Reversing the array
    int n = 5; // size of the array
    for (int i = 0; i < n / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = temp;
    }

    // Printing the reversed elements of the array
    std::cout << "Reversed Array: ";
    for (int i = 0; i < 5; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
