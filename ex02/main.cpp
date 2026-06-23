#include <iostream>
#include <string>
#include "Array.hpp"

int main()
{
    Array<int> arr(5);
    for (unsigned int i = 0; i < arr.size(); i++)
        arr[i] = i * 10;

    for (unsigned int i = 0; i < arr.size(); i++)
        std::cout << "arr[" << i << "] = " << arr[i] << std::endl;
    try
    {
        std::cout << arr[10] << std::endl;
    }
    catch (const std::exception& e)
    {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    Array<int> copyArr(arr);
    Array<int> assignedArr;
    assignedArr = arr;
    std::cout << "copyArr size: " << copyArr.size() << ", assignedArr size: " << assignedArr.size() << std::endl;
    for (unsigned int i = 0; i < copyArr.size(); i++)
        std::cout << "copyArr[" << i << "] = " << copyArr[i] << std::endl;
    for (unsigned int i = 0; i < assignedArr.size(); i++)
        std::cout << "assignedArr[" << i << "] = " << assignedArr[i] << std::endl;

    arr[1] = 999;
    std::cout << "arr[1]=" << arr[1] << ", copyArr[1]=" << copyArr[1] << ", assignedArr[1]=" << assignedArr[1] << std::endl;

    Array<double> empty;
    std::cout << "empty size: " << empty.size() << std::endl;
    try
    {
        empty[0] = 1.23;
    }
    catch (const std::exception& e)
    {
        std::cerr << "Empty array exception: " << e.what() << std::endl;
    }

    Array<std::string> words(3);
    words[0] = "hello";
    words[1] = "world";
    words[2] = "!";
    for (unsigned int i = 0; i < words.size(); ++i)
        std::cout << "words[" << i << "]=" << words[i] << std::endl;

    try
    {
        std::cout << arr[-1] << std::endl;
    }
    catch (const std::exception& e)
    {
        std::cerr << "Negative index exception: " << e.what() << std::endl;
    }


    return 0;
}
