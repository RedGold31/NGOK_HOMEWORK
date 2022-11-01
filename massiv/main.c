#include "func.h"
#include <stdio.h>

#define SIZE 10
#define FIND 7

int main()
{

    int array[SIZE] = {0};
    // int number = 0;
    set_mass(array, SIZE);
    // print_mass(array, SIZE);
    bubble_sort(array, SIZE);
    // print_mass(array, SIZE);
    // reserve(array, SIZE);
    print_mass(array, SIZE);
    int a = binary_search(array, SIZE, FIND);
    int b = search_index(array, SIZE, FIND);
    printf("a = %d b = %d res = %s\n", a, b, a == b ? "true" : "false");
    // int max = search_max(array, SIZE);
    // int min = search_min(array, SIZE);
}