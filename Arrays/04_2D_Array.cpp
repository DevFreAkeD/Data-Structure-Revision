#include <iostream>

int main()
{
    // Declaring and initializing 2D array
    int arr[2][3] = { {10, 20, 30}, {40, 50, 60} };

    std::cout << "2D Array:" << std::endl;
    // Printing 2D array
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
