#include "func.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10
#define SIZE_2 10
#define FIND 8

int main()
{

    int array[SIZE] = {0};

    int array_2[SIZE_2] = {0};

    fillrandom(array, SIZE);

    fillrandom(array_2, SIZE_2);

    print_mass(array, SIZE);

    print_mass(array_2, SIZE_2);

    array_swap(array, SIZE, array_2, SIZE_2);

    print_mass(array, SIZE);

    print_mass(array_2, SIZE_2);

    bubble_sort(array, SIZE);

    int a = binary_search(array, SIZE, FIND);

    int b = search_index(array, SIZE, FIND);

    printf("a = %d b = %d res = %s\n", a, b, a == b ? "true" : "false");

    reserve(array, SIZE);

    print_mass(array, SIZE);

    int max = search_max(array, SIZE);

    int min = search_min(array, SIZE);

    printf("max - %d\n", max);

    printf("min - %d\n", min);
}