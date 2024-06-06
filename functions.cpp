#include "functions.h"
#include <iostream>
#include <stdlib.h>

int MonotoneSequence(int array[], int const SIZE)
{
    int count = 0; //������� ��� ������������ ��������
    bool check = false;
    for (int i = 1; i < SIZE; i++) //������� � ������
    {
        if (array[i] > array[i - 1]) // ���������, ��� ������� ����� ������ �����������
        {
            if (!check)
                count++; // ����������� �������
            check = true;
        }
        else
            check = false;
    }
    return count;
}