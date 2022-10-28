#include <stdio.h>
#define SIZE 10

void set_mass(int a[]);
void print_mass(int a[]);
int search_max(int a[]);
int search_min(int a[]);
int search_index(int a[], int size, int number);

void set_mass(int a[])
{
    for (int i = 0; i < SIZE; ++i) {
        scanf("%d", &a[i]);
        setbuf(stdin, NULL);
    }
}

void print_mass(int a[])

{
    for (int i = 0; i < SIZE; ++i) {
        printf(" %d ", a[i]);
    }
    printf("\n");
}

int search_max(int a[])
{
    int max = a[0];

    for (int i = 0; i < SIZE; ++i) {
        if (max < a[i]) {
            max = a[i];
        }
    }
    return max;
}

int search_index(int a[], int size, int number)
{

    int number = -1;

    for (int i = 0; i < size - 1; ++i) {
        if (a[i] = number) {
            number = i;
            break;
        }
    }
    return number
}

int search_min(int a[])
{
    int min = a[0];

    for (int i = 0; i < SIZE; ++i) {
        if (min > a[i]) {
            min = a[i];
        }
    }
    return min;
}

int main()
{

    int a[SIZE] = {0};
    set_mass(a);
    print_mass(a);
    search_max(a);
    int max = search_max(a);
    int min = search_min(a);
    int ind = search_index(a);
    printf("max - %d\n", max);
    printf("min - %d\n", min);
    printf("number - %d\n", ind);
}
