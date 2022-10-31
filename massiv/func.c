#include "func.h"
#include <stdio.h>
#include <stdlib.h>

void set_mass(int *array, const unsigned int size)
{

    for (unsigned int i = 0; i < size; ++i) {
        scanf("%d", &array[i]);
        setbuf(stdin, NULL);
    }
}

void print_mass(const int array[], unsigned int size)

{
    for (int unsigned i = 0; i < size; ++i) {
        printf(" %d ", array[i]);
    }
    printf("\n");
}

int search_max(int array[], unsigned int size)
{
    int max = array[0];
    for (unsigned int i = 1; i < size; ++i) {
        if (max < array[i]) {
            max = array[i];
        }
    }
    return max;
}

int search_index(int array[], int size, int number)
{
    number = 0;
    int index = 0;

    for (int i = 0; i < size; ++i) {
        if (array[i] == number) {
            index = i;
            break;
        }
    }

    return index;
}

int search_min(int array[], const unsigned int size)
{
    int min = array[0];

    for (unsigned int i = 1; i < size; ++i) {
        if (min > array[i]) {
            min = array[i];
        }
    }
    return min;
}

void reserve(int *array, const unsigned int size)
{

    int tmp = array[0];
    for (unsigned int i = 0, j = size - 1; i < size / 2; ++i, --j) {
        array[i] = array[j];
        array[j] = tmp;
        tmp = array[i + 1];
    }
}