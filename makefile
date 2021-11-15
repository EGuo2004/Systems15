
all: main.o
	gcc -o fifteen main.o

main.o: main.c
	gcc -c main.c

run:
	./fifteen