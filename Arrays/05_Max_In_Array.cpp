#include <iostream>
#include <limits.h> // for INT_MIN

int main()
{
    // 1D array declaration and initialization
    int arr[5] = {15, 25, 35, 45, 55};

    // Printing the elements of the array
    std::cout << "Elements of Array: ";
    for (int i = 0; i < 5; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    // Finding the maximum element in the 1D array
    int maxElement = INT_MIN;
    for (int i = 0; i < 5; i++) {
        if (arr[i] > maxElement) {
            maxElement = arr[i];
        }
    }

    std::cout << "Maximum element in the array: " << maxElement << std::endl;

    return 0;
}
