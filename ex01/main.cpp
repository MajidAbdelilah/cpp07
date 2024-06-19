#include <iostream>
#include "iter.hpp"
template<typename T>
void func(T &elem)
{
    elem *= 10;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    std::cout << "before:\n";
    for (int i = 0; i < 5; i++)
    {
        std::cout << arr[i] << std::endl;
    }
    std::cout << "after:\n";
    iter(arr, 5, func);
    for (int i = 0; i < 5; i++)
    {
        std::cout << arr[i] << std::endl;
    }
    return 0;

}