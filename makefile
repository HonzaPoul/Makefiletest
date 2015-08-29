main:main.o
	gcc main.o -o main
main.o:main.cpp
	gcc -c main.cpp
clean:
	rm -rf *.o main
	gcc -o main.cpp