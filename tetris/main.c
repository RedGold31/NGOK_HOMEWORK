#include "func.h"
#include <stdio.h>
#include <stdlib.h>

int main()
{

    // menu();
    cup_t cup;
    cup = create_cup(CUP_X, CUP_Y);

    figure_t smash_boy;
    smash_boy = create_figure(FIGURE_X, FIGURE_Y);
    fill_smash_boy(&smash_boy);

    figure_t tmp;

    int res = 0, down = 0;
    tmp = create_figure(FIGURE_X, FIGURE_Y);
    added_figure(&cup, &smash_boy);
    system("clear");
    print_cup(&cup);

    while (res != Q) {
        res = getchar();
        setbuf(stdin, NULL);
        if (res != ENTER) {
            switch (res) {
            case W:
                // povorot
                break;
            case A:
                copy_figure(&smash_boy, &tmp);
                move_left(&smash_boy);
                break;
            case S:
                copy_figure(&smash_boy, &tmp);
                down = move_down(&smash_boy);
                break;
            case D:
                copy_figure(&smash_boy, &tmp);
                move_right(&smash_boy);
                break;
            }
            delete_figure(&cup, &tmp);

            added_figure(&cup, &smash_boy);
            system("clear");
            print_cup(&cup);
            if (!down) {
                fill_smash_boy(&smash_boy);
            }
        }
    }
    remove_figure(&tmp);
    remove_figure(&smash_boy);
    remove_cup(&cup);
}