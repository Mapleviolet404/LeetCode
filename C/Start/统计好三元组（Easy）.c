#include <math.h>

int count_good_triplets(int* arr, int arr_size, int a, int b, int c) 
{
    int ans = 0;
    for (int i = 0; i < arr_size; ++i)
    {
        for (int j = i + 1; j < arr_size; ++j)
        {
            for (int k = j + 1; k < arr_size; ++k)
            {
                if (abs(arr[i] - arr[j]) <= a && abs(arr[j] - arr[k]) <= b && abs(arr[i] - arr[k]) <= c) ans++;
            }
        }
    }
    return ans;
}