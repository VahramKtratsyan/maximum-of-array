#include "../header/maximum_of_array.hpp"

int max(int array[], int size)
{
    int res  = array[0];
    for (int i = 0; i < size - 1; ++i)
        if (res < array[i + 1])
            res = array[i + 1];   
    return res;
}