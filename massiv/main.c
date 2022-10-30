#include <stdio.h>
#define SIZE 10

// функция ввода элементов массива
void set_mass(int *a, int size); // заменить на указатель a[]
// функция вывода элементов массива
void print_mass(int a[], int size);
// функция поиска максимального элемента в массиве
int search_max(int a[], int size);
// функция поиска минимального элемента в массиве
int search_min(int a[], int size);
// функция поиска индекса элемента в массиве по значению number
int search_index(int a[], int size, int number);
// меняет элементы местами (переворачивает массив) 
int reserve(int *a, int size); // заменить на указатель a[]

// добавить аргументу size в функции
// разбить на файлы (main.c, array_func.c array_func.h)
// добавить Makefile

void set_mass(int *a, int size)
{
    
    for (int i = 0; i < SIZE; ++i) {
        scanf("%d", &a[i]);
        setbuf(stdin, NULL);
    }
}

void print_mass(int a[], int size)

{
    for (int i = 0; i < SIZE; ++i) {
        printf(" %d ", a[i]);
    }
    printf("\n");
}

int search_max(int a[], int size)
{
    int max = a[0];
    for (unsigned int i = 1; i < SIZE; ++i) {
        if (max < a[i]) {
            max = a[i];
        }
    }
    return max;
}

int search_index(int a[], int size, int number)
{
    // зачем 10?
   // удOли 
    number = 0;
    int index = 0;

    for (int i = 0; i < number; ++i) {
        if(a[i] == number){
            index = i;
            break;
        }

    }


    return index;
}

int search_min(int a[], int size)
{
    // дописать как max
    int min = a[0];

    for (unsigned int i = 1; i < SIZE; ++i) {
        if (min > a[i]) {
            min = a[i];
        }
    }
    return min;
}

int reserve(int *a, int size)
{
    // возвращает обратный массив
    for (int i = 0; i < SIZE; ++i) {
        printf(" %d ", a[SIZE - i - 1]);
    }
    printf("\n");
}

int main()
{

    int a[SIZE] = {0};
    int number = 0;
    set_mass(a, SIZE);
    print_mass(a, SIZE);
    reserve(a, SIZE);
    int ind = search_index(a, SIZE, number);
    int max = search_max (a, SIZE);
    int min = search_min (a, SIZE);
    printf("max - %d\n", max);
    printf("min - %d\n", min);
    printf("ind - %d\n", ind);
}
