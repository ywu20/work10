all:	main.o	Poke.o
	gcc	-o	main	main.o	Poke.o
main.o:	main.c	Poke.h
	gcc	-c	main.c
Poke.o:	Poke.c	Poke.h
	gcc	-c	Poke.c
run:
	./main
