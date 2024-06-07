#include <iostream>

int main()
{
    // Array initialization using initializer list
    int arr[5] = { 10, 20, 30, 40, 50 };

    // Array initialization using initializer list without specifying size
    int arr1[] = { 1, 2, 3, 4, 5 };

    // Array initialization using for loop
    float arr2[5];
    for (int i = 0; i < 5; i++) {
        arr2[i] = static_cast<float>(i) * 2.1f;
    }

    // Print arrays to verify their values
    std::cout << "arr: ";
    for (int i = 0; i < 5; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "arr1: ";
    for (int i = 0; i < 5; i++) {
        std::cout << arr1[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "arr2: ";
    for (int i = 0; i < 5; i++) {
        std::cout << arr2[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
