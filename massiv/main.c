#include "func.h"
#include <stdio.h>

#define SIZE 10

int main()
{

    int array[SIZE] = {0};
    int number = 0;
    set_mass(array, SIZE);
    print_mass(array, SIZE);
    reserve(array, SIZE);
    print_mass(array, SIZE);
    int ind = search_index(array, SIZE, number);
    int max = search_max(array, SIZE);
    int min = search_min(array, SIZE);
    printf("max - %d\n", max);
    printf("min - %d\n", min);
    printf("ind - %d\n", ind);
}