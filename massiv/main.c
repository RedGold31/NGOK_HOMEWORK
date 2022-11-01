#include "func.h"
#include <stdio.h>

#define SIZE 10
#define FIND 9

int main()
{

    int array[SIZE] = {0};
    set_mass(array, SIZE);
    print_mass(array, SIZE);
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
