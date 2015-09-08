main:main.o
	gcc main.o -o thetest
main.o:main.c config.h
	gcc -c main.c
clean:
	rm -rf *.o main