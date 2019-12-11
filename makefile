default: all

all: main

main: main.c
	gcc -o main main.c memfrobber.c 

main.c: gen_main.sh
	./gen_main.sh > main.c
