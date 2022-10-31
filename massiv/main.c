#include <stdio.h>
#define SIZE 10

// функции и переменные должны называться логично!!
// если переданная аргумента не меняется внутри функции пишем - const
// размер массива не может быть отрицательным - пишем const unsigned
void set_mass(int *array, const unsigned int size); 
void print_mass(const int a[], const unsigned int size);
// и так далее ......
int search_max(int a[], int size);
int search_min(int a[], int size);
int search_index(int a[], int size, int number);
int reserve(int *a, int size);

// разбить на файлы (main.c, array_func.c array_func.h)
// добавить Makefile

void set_mass(int *a, int size)
{
    // беззнаковый (т.к. не может быть размер отрицательным
    for (unsigned int i = 0; i < SIZE; ++i) {
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

// функция ничего не возвращает, просто меняет массив переданный аргументой
int reserve(int *a, int size)
{
    // меняет массив в обратный порядок
    for (int i = 0; i < SIZE; ++i) {
        printf(" %d ", a[SIZE - i - 1]);
    }
    printf("\n");
    /*
       int tmp = array[0];
        for (unsigned int i = 0, j = size - 1; i < size / 2; ++i, --j) {
            array[i] = array[j];
            array[j] = tmp;
            tmp = array[i + 1];
        }
    */
    
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
