#include <stdio.h>
#define SIZE 10

// функция ввода элементов массива
void set_mass(int a[], size); // заменить на указатель a[]
// функция вывода элементов массива
void print_mass(int a[], size);
// функция поиска максимального элемента в массиве
int search_max(int a[], size);
// функция поиска минимального элемента в массиве
int search_min(int a[], size);
// функция поиска индекса элемента в массиве по значению number
int search_index(int a[], int size, int number);
// меняет элементы местами (переворачивает массив) 
int reserve(int a[], size); // заменить на указатель a[]

// добавить аргументу size в функции
// разбить на файлы (main.c, array_func.c array_func.h)
// добавить Makefile

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
    number = 10;
    int index = 0;

    for (int i = 0; i < number; ++i) {
        // сканф не нужен, мы тут ничего не вводим, только ищем
//         scanf("%d\n", &a[i]);
//         printf("%d\n", a[i] - number);
        if(a[i] == number){
            index = i;
            break;
        }
    }

    return index;
}

int search_min(int a[])
{
    // дописать как max
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
    // возвращает обратный массив
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
