#ifndef _FUNC_H_
#define _FUNC_H_

void set_mass(int *array, const unsigned int size);
void print_mass(const int array[], unsigned int size);
int search_max(int array[], int const unsigned size);
int search_min(int array[], int const unsigned size);
int search_index(int array[], int size, int number);
void bubble_sort(int *array, const unsigned int size);
int binary_search(int array[], int size, int number);
void reserve(int *array, const unsigned int size);
void fillrandom(int *array, const unsigned int size);
void array_swap(int *array, const unsigned int size, int *array_2,
                const unsigned int size_2);

#endif // _FUNC_H_
