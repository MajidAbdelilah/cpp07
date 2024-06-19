#include "Array.hpp"
#include <exception>
#include <iostream>

int main()
{
    Array<int> arr(5);
    for (unsigned int i = 0; i < arr.size(); i++)
    {
        arr[i] = i + 1;
    }
    for (unsigned int i = 0; i < arr.size(); i++)
    {
        std::cout << arr[i] << std::endl;
    }
    Array<float> f_arr;
    try {
        f_arr[0] = 21.12;
    } catch (std::exception &e) {
        std::cerr << e.what() << std::endl;
    }
    Array<int> arr2(arr);
	for (unsigned int i = 0; i < arr2.size(); i++)
	{
		std::cout << arr2[i] << std::endl;
	}
	std::cout << "---------------------\n";
	Array<int> arr3;
	arr3 = arr2;
	try {
		for (unsigned int i = 0; i < (arr3.size() + 5); i++)
		{
			std::cout << arr3[i] << std::endl;
		}
	} catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	Array<double> d_arr(10);
	for (unsigned int i = 0; i < d_arr.size(); i++)
	{
		d_arr[i] = i + 1 + .5f;
	}
	for (unsigned int i = 0; i < d_arr.size(); i++)
	{
		std::cout << d_arr[i] << std::endl;
	}
	std::cout << "size of d_arr: " << d_arr.size() << std::endl;
	return 0;
}