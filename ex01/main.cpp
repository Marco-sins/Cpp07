#include "iter.hpp"
#include <iostream>


int main()
{
    int arr[] = {10, -1, 0, 1, 2, 3, 4, 5};
    size_t length = sizeof(arr) / sizeof(arr[0]);
    
    std::cout << "Original array: ";
    for (size_t i = 0; i < length; ++i)
    {
        std::cout << arr[i] << " ";
    }

    ::iter(arr, length, ::sumOne);
    
    std::cout << "\nArray after applying sumOne: ";
    for (size_t i = 0; i < length; ++i)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    char arr2[] = {'a', 'b', 'c', 'd', 'e'};
    size_t length2 = sizeof(arr2) / sizeof(arr2[0]);

    std::cout << "\nOriginal array2: ";
    for (size_t i = 0; i < length2; ++i)
    {
        std::cout << arr2[i] << " ";
    }

    ::iter(arr2, length2, ::sumOne);

    std::cout << "\nArray2 after applying sumOne: ";
    for (size_t i = 0; i < length2; ++i)
    {
        std::cout << arr2[i] << " ";
    }
    std::cout << std::endl;


    return 0;
}