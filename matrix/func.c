#include "func.h"
#include <stdio.h>
#include <stdlib.h>

matrix_t create_matrix(const unsigned int rows, const unsigned int cols)
{
    matrix_t neo;
    neo.cols = cols;
    neo.rows = rows;
    neo.matrix = (double **)calloc(rows, sizeof(double *));
    for (unsigned int i = 0; i < rows; ++i) {
        neo.matrix[i] = (double *)calloc(cols, sizeof(double));
    }

    return neo;
}

void print_matrix(matrix_t *matrix)
{
    for (int i = 0; i < matrix->rows; ++i) {
        for (int j = 0; j < matrix->cols; ++j) {
            printf(" %.2f ", matrix->matrix[i][j]);
        }
        printf("\n");
    }
}

void free_matrix(matrix_t *matrix)
{
    for (int i = 0; i < matrix->rows; ++i) {
        free(matrix->matrix[i]);
    }
    free(matrix->matrix);
}

void fill_matrix(matrix_t *matrix)
{
    for (int i = 0; i < matrix->rows; ++i) {
        for (int j = 0; j < matrix->cols; ++j) {
            scanf("%lf", &matrix->matrix[i][j]);
            setbuf(stdin, NULL);
        }
    }
}

int eq_size(matrix_t *neo, matrix_t *Morfius)
{
    int res = 0;
    if (neo->rows == Morfius->rows && neo->cols == Morfius->cols) {
        res = 0;
        return res;
    }
    return res;
    
}

int eq_matrix(matrix_t *neo, matrix_t *Morfius)
{
    int res = 0;
    if(eq_size(neo, Morfius)){
        for(int i = 0; i < neo->rows; ++i){
            for(int j = 0; j < neo->cols; ++j){
                if(neo->matrix[i][j] == Morfius->matrix[i][j]){
                }
                else{
                    return res;
                }
            }
        }
    }
    else {
        ++res;
        return res;
    }
    return 0;
}
