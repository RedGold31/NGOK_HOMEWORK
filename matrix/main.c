#include "func.h"
#include <stdio.h>
#include <stdlib.h>

int main()
{
    matrix_t Morfius;
    Morfius = create_matrix(3, 3);
    fill_matrix(&Morfius);
    print_matrix(&Morfius);
    matrix_t neo;
    neo = create_matrix(3, 3);
    fill_matrix(&neo);
    print_matrix(&neo);
    printf("Сумма матриц - \n");
    matrix_t sum = sum_matrix(&neo, &Morfius);
    print_matrix(&sum);
    printf("Разница матриц - \n");
    matrix_t sub = sub_matrix(&neo, &Morfius);
    print_matrix(&sub);
    printf("Умножение матрицы на число - \n");
    matrix_t mult = mult_number(&neo, 5.00);
    print_matrix(&mult);
    printf("Умножение матриц - \n");
    matrix_t mult_m = mult_matrix(&neo, &Morfius);
    print_matrix(&mult_m);
    printf("Свап - \n");
    matrix_t tran = tran_matrix(&neo);
    print_matrix(&tran);
    printf("Минор матриц - \n");
    matrix_t minr = minr_matrix(&neo, 1, 1);
    print_matrix(&minr);
    double det = det_matrix(&minr);
    printf("%f", det);
    // int res = eq_size(&neo, &Morfius);
    // printf("res = %d \n", res);
    // int equals = eq_matrix(&neo, &Morfius);
    // printf("equals = %d \n", equals);
    free_matrix(&neo);
    free_matrix(&Morfius);
}