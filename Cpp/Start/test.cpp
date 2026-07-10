#include <iostream>

int main()
{
    int* arr = new int[10];
    for (int i = 0; i < 10; ++i)
    {
        arr[i] = i;
        std::cout<< i << std::endl;
    }
    delete[] arr;
    return 0;
}