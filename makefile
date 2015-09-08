filelist = main.o pid.o motor.o

main:$(filelist)
	gcc $(filelist) -o ThistestApp
main.o:main.c config.h
	gcc -c main.c
pid.o:pid.c pid.h
	gcc -c pid.c
motor.o:/motor/motor.c .motor/motor.h
	gcc -c /motor/motor.c
clean:
	rm -rf *.o main