#include <stdio.h>
#define SIZE 10

void set_mass(int a[]);
void print_mass(int a[]);
int search_max(int a[]);
int search_min(int a[]);
int search_index(int a[], int size, int number);
int reserve(int a[]);

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

    number = 10;

    for (int i = 0; i < number; ++i) {
        scanf("%d\n", &a[i]);
        printf("%d\n", a[i] - number);
        break;
    }

    return number;
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

int reserve(int a[])
{
    for (int i = 0; i < SIZE; ++i) {
        printf(" %d ", a[SIZE - i - 1]);
    }
    printf("\n");
}

int main()
{

    int a[SIZE] = {0};
    set_mass(a);
    print_mass(a);
    search_max(a);
    int res = reserve(a);
    int max = search_max(a);
    int min = search_min(a);
    printf("max - %d\n", max);
    printf("min - %d\n", min);
}
