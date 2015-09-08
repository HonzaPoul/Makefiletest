main:main.o
	gcc main.o -o main
main.o:main.c config.h
	gcc -c main.c
clean:
	rm -rf *.o main
	gcc -o main.c