#include "functions.h"
#include <iostream>
#include <stdlib.h>

int MonotoneSequence(int array[], int const SIZE)
{
    int count = 0; //счётчик для возрастающих участков
    bool check = false;
    for (int i = 1; i < SIZE; i++) //заходим в массив
    {
        if (array[i] > array[i - 1]) // проверяем, что текущее число меньше предыдущего
        {
            if (!check)
                count++; // увеличиваем счётчик
            check = true;
        }
        else
            check = false;
    }
    return count;
}