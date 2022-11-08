#ifndef _FUNC_H_
#define _FUNC_H_

typedef struct {
    char **cup;
    int cup_x;
    int cup_y;
} cup_t;

typedef struct {
    int **figure;
    int figure_x;
    int figure_y;
} figure_t;

cup_t create_cup(int cup_x, int cup_y);
void print_cup(cup_t *matrix);
figure_t create_figure(int figure_x, int figure_y);
void print_figure(figure_t *figure);
void remove_figure(figure_t *figure);
void remove_cup(cup_t *cup);

void fill_smash_boy(figure_t *figure);

void added_figure(cup_t *cup, figure_t *figure);

void move_down(figure_t *figure);
void move_left(figure_t *figure);
void move_right(figure_t *figure);

void clear_ghost(cup_t *cup, figure_t *figure);

void menu();

#endif // _FUNC_H_