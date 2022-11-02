#include "func.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

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

void bubble_sort(int *array, const unsigned int size)
{
    int tmp = 0;

    for (unsigned int i = 0; i < size - 1; ++i) {
        for (unsigned int j = 0; j < size - i - 1; ++j) {
            if (array[j] > array[j + 1]) {
                tmp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = tmp;
                tmp = array[j + 1];
            }
        }
    }
}

int binary_search(int array[], int size, int number)
{
    int min_i = 0;
    int max_i = size;
    int mid_i = max_i / 2;
    int res = -1;
    int count = 0;

    while (1) {
        if (number > array[mid_i]) {
            min_i = mid_i;
            mid_i = (min_i + max_i) / 2;
        } else if (number == array[mid_i]) {
            res = mid_i;
            break;
        } else {
            max_i = mid_i;
            mid_i = (max_i + mid_i - 1) / 2;
        }
        if ((mid_i == 0 || mid_i == size - 1) && number != array[mid_i]) {
            break;
        }
        ++count;
    }

    printf("cont - %d ", count);
    return res;
}

void fillrandom(int *array, const unsigned int size)
{
    srand(time(NULL));
    for (unsigned int i = 0; i < size; ++i) {
        array[i] = 0 + rand() % (size - 0 + 1);
    }
}

void array_swap(int *array, const unsigned int size, int *array_2,
                const unsigned int size_2)
{
    if (size == size_2) {
        int tmp = array[0];

        for (unsigned int i = 0; i < size; ++i) {
            array[i] = array_2[i];
            array_2[i] = tmp;
            tmp = array[i + 1];
        }
    } else {
        printf("DIFFERENT SIZE ARRAYS!\n");
    }
}
