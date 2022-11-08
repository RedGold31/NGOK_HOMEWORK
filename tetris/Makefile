CC = gcc
FLAGS = -Wall -Werror -Wextra

all: tetris

tetris:
	@${CC} ${FLAGS} main.c func.c -o tetris 

valgrind:
	@valgrind --leak-check=full --tool=memcheck ./tetris

run:
	@./tetris

clean:
	@rm -rf tetris *.out .vscode/