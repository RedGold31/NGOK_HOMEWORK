#include <stdio.h>

int main()
{
    int number = 0;
    int sum = 0;
    int tmp = 10;
    scanf("%d", &number);
    while (number != 0) {
        tmp = number % 10;
        number /= 10;
        sum += tmp;
    }

    printf("sum = %d\n", sum);
}