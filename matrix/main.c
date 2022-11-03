#include "func.h"
#include <stdio.h>
#include <stdlib.h>

int main()
{
    matrix_t Morfius;
    Morfius = create_matrix(4, 6);
    fill_matrix(&Morfius);
    print_matrix(&Morfius);
    matrix_t neo;
    neo = create_matrix(4, 6);
    fill_matrix(&neo);
    print_matrix(&neo);
    eq_size(&neo, &Morfius);
    free_matrix(&neo);
    free_matrix(&Morfius);
}