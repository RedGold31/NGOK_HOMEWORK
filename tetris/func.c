#include "func.h"
#include <stdio.h>
#include <stdlib.h>

void menu()
{
    int res = 0;
    while (res != 2) {
        printf("    Menu\n   1.Start \n   2.Exit\n");
        scanf("%d", &res);
        setbuf(stdin, NULL);
        switch (res) {
        case 1:
            //   igra;

            break;

        default:
            break;
        }
    }
}

cup_t create_cup(int cup_x, int cup_y)
{
    cup_t cup;
    cup.cup_x = cup_x;
    cup.cup_y = cup_y;
    cup.cup = (char **)calloc(cup_x, sizeof(char *));
    for (int i = 0; i < cup_x; ++i) {
        cup.cup[i] = (char *)calloc(cup_x, sizeof(char));
    }
    for (int i = 0; i < cup_x; ++i) {
        for (int j = 0; j < cup_y; ++j) {
            cup.cup[i][j] = ' ';
        }
    }
    return cup;
}

void print_cup(cup_t *cup)
{
    for (int i = 0; i < cup->cup_x; ++i) {
        for (int j = 0; j < cup->cup_y; ++j) {
            printf(" %c ", cup->cup[i][j]);
        }
        printf("\n");
    }
}

void remove_cup(cup_t *cup)
{
    for (int i = 0; i < cup->cup_x; ++i) {
        free(cup->cup[i]);
    }
    free(cup->cup);
}

figure_t create_figure(int figure_x, int figure_y)
{
    figure_t figure;
    figure.figure_x = figure_x;
    figure.figure_y = figure_y;
    figure.figure = (int **)calloc(figure_x, sizeof(int *));
    for (int i = 0; i < figure_x; ++i) {
        figure.figure[i] = (int *)calloc(figure_x, sizeof(int));
    }
    return figure;
}

void print_figure(figure_t *figure)
{
    for (int i = 0; i < figure->figure_x; ++i) {
        for (int j = 0; j < figure->figure_y; ++j) {
            printf(" %d ", figure->figure[i][j]);
        }
        printf("\n");
    }
}

void remove_figure(figure_t *figure)
{
    for (int i = 0; i < figure->figure_x; ++i) {
        free(figure->figure[i]);
    }
    free(figure->figure);
}

void fill_smash_boy(figure_t *figure)
{
    figure->figure[0][0] = 0;
    figure->figure[0][1] = 4;

    figure->figure[1][0] = 0;
    figure->figure[1][1] = 5;

    figure->figure[2][0] = 1;
    figure->figure[2][1] = 4;

    figure->figure[3][0] = 1;
    figure->figure[3][1] = 5;
}

void added_figure(cup_t *cup, figure_t *figure)
{
    for (int i = 0; i < figure->figure_x; ++i) {
        cup->cup[figure->figure[i][0]][figure->figure[i][1]] = '*';
    }
}

int move_down(figure_t *figure)
{
    int breaker = 1;
    for (int i = 0; i < figure->figure_x && breaker; ++i) {
        for (int j = 0; j < figure->figure_y && breaker; ++j) {
            if (figure->figure[i][j] == CUP_X - 1) {
                breaker = 0;
                break;
            }
        }
    }

    for (int i = 0; i < figure->figure_x && breaker; ++i) {
        figure->figure[i][0] += 1;
    }
    return breaker;
}

void move_left(figure_t *figure)
{

    int breaker = 1;
    for (int i = 0; i < figure->figure_x && breaker; ++i) {
        for (int j = 0; j < figure->figure_y && breaker; ++j) {
            if (figure->figure[i][j] == 0) {
                breaker = 0;
                break;
            }
        }
    }

    for (int i = 0; i < figure->figure_x && breaker; ++i) {
        figure->figure[i][1] -= 1;
    }
}

void move_right(figure_t *figure)
{

    int breaker = 1;
    for (int i = 0; i < figure->figure_x && breaker; ++i) {
        for (int j = 0; j < figure->figure_y && breaker; ++j) {
            if (figure->figure[i][j] == CUP_Y - 1) {
                breaker = 0;
                break;
            }
        }
    }

    for (int i = 0; i < figure->figure_x && breaker; ++i) {
        figure->figure[i][1] += 1;
    }
}

void copy_figure(figure_t *curr, figure_t *next)
{
    next->figure_x = curr->figure_x;
    next->figure_y = curr->figure_y;
    for (int i = 0; i < curr->figure_x; ++i) {
        for (int j = 0; j < curr->figure_y; ++j) {
            next->figure[i][j] = curr->figure[i][j];
        }
    }
}

void delete_figure(cup_t *cup, figure_t *figure)
{
    for (int i = 0; i < figure->figure_x; ++i) {
        cup->cup[figure->figure[i][0]][figure->figure[i][1]] = ' ';
    }
}
