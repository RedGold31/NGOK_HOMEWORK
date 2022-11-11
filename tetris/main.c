#include "func.h"
#include <stdio.h>
#include <stdlib.h>
#include <ncurses.h>

int main()
{

    initscr();            // Переход в curses-режим
    keypad(stdscr, true); // Включаем режим чтения функциональных клавиш
    noecho(); // Выключаем отображение вводимых символов, нужно для getch()
    curs_set(0); // "Убиваем" курсор
    halfdelay(
        10); // Устанавливаем ограничение по времени ожидания getch() в 1 сек

    cup_t cup;
    cup = create_cup(CUP_X, CUP_Y);

    figure_t current_figure;
    current_figure = create_figure(FIGURE_X, FIGURE_Y);
    fill_smash_boy(&current_figure);

    figure_t tmp;

    int res = 0, down = 1;
    tmp = create_figure(FIGURE_X, FIGURE_Y);

    while (res != Q) {
        res = getch(); // ввод с клавиатуры
        clear();       // очистка экрана
        copy_figure(&current_figure, &tmp);
        switch (res) {
        case W:
            // povorot
            break;
        case A:
            move_left(&current_figure, &cup);
            break;
        case S:
            down = move_down(&current_figure, &cup);
            break;
        case D:
            move_right(&current_figure, &cup);
            break;
        case SPACE:
            while (down) {
                copy_figure(&current_figure, &tmp);
                down = move_down(&current_figure, &cup);
                delete_figure(&cup, &tmp);
                added_figure(&cup, &current_figure);
            }
            break;
        default:
            down = move_down(&current_figure, &cup);
            break;
        }
        delete_figure(&cup, &tmp);
        added_figure(&cup, &current_figure);
        print_cup(&cup);

        if (!down) {
            fill_smash_boy(&current_figure);
        }
    }
    remove_figure(&tmp);
    remove_figure(&current_figure);
    remove_cup(&cup);

    getch(); // Ожидание нажатия какой-либо клавиши пользователем
    endwin(); // Выход из curses-режима. Обязательная команда.
}