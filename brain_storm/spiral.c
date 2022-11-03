#include <stdio.h>
#include <stdlib.h>
#define true 1

typedef struct {
    double **matrix;
    int rows;
    int cols;
} matrix_t;

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

void fill_good(matrix_t *matrix)
{
    int bebrik = 0, black = matrix->rows - 2, aboba = 0, abobus = 0, number = 1, i = 0;
    while(true)
    {
        for(int j = bebrik; j < matrix->rows - aboba; j++){
            matrix->matrix[i][j] = number;
            number++;
            if(number == matrix->rows * matrix->cols + 1){
                abobus = 1;
            }
        }
        for(int j = bebrik + 1; j < matrix->rows - aboba; j++){
            matrix->matrix[j][matrix->rows - i - 1] = number;
            number++;
            if(number == matrix->rows * matrix->cols + 1){
                abobus = 1;
            }
        }
        for(int j = black;j >= 0 + aboba; j--){
            matrix->matrix[matrix->rows - i - 1][j] = number;
            number++;
            if(number == matrix->rows * matrix->cols + 1){
                abobus = 1;
            }
        }
        for(int j = black; j >= 1 + aboba; j--){
            matrix->matrix[j][i] = number;
            number++;
            if(number == matrix->rows * matrix->cols + 1){
                abobus = 1;
            }
        }    
    if(abobus == 1){
        break;
    }
    aboba++;
    i++;
    black--;
    bebrik++;
    }   
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

int main(){
    matrix_t neo;
    neo = create_matrix(5, 5);
    fill_good(&neo);
    print_matrix(&neo);
}