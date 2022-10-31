CC = gcc
FLAGS = -Wall -Werror -Wextra

all: array run

array:
	@${CC} ${FLAGS} main.c func.c -o array

run:
	@./array

clean:
	@rm -rf array *.out