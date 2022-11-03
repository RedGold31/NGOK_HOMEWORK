CC = gcc
FLAGS = -Wall -Werror -Wextra

all: matrix

matrix:
	@${CC} ${FLAGS} main.c func.c -o matrix

valgrind:
	@valgrind --leak-check=full --tool=memcheck ./matrix

run:
	@./matrix

clean:
	@rm -rf matrix *.out .vscode/