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

    arr[0] = 999;
    std::cout << "arr[0]=" << arr[0] << ", copyArr[0]=" << copyArr[0] << ", assignedArr[0]=" << assignedArr[0] << std::endl;

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
        std::cout << arr[static_cast<unsigned int>(-1)] << std::endl;
    }
    catch (const std::exception& e)
    {
        std::cerr << "Negative index exception: " << e.what() << std::endl;
    }


    return 0;
}



// #define MAX_VAL 750
// int main(int, char**)
// {
//     Array<int> numbers(MAX_VAL);
//     int* mirror = new int[MAX_VAL];
//     srand(time(NULL));
//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         const int value = rand();
//         numbers[i] = value;
//         mirror[i] = value;
//     }
//     //SCOPE
//     {
//         Array<int> tmp = numbers;
//         Array<int> test(tmp);
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         if (mirror[i] != numbers[i])
//         {
//             std::cerr << "didn't save the same value!!" << std::endl;
//             return 1;
//         }
//     }
//     try
//     {
//         numbers[-2] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }
//     try
//     {
//         numbers[MAX_VAL] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         numbers[i] = rand();
//     }
//     delete [] mirror;//
//     return 0;
// }