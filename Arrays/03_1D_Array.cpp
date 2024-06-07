#include <iostream>

int main()
{
    // 1D array declaration
    int arr[5];

    // 1D array initialization using for loop
    for (int i = 0; i < 5; i++) {
        arr[i] = i * i - 2 * i + 1;
    }

    std::cout << "Elements of Array: ";
    // Printing 1D array by traversing using for loop
    for (int i = 0; i < 5; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
