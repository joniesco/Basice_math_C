CC= gcc
FLAGS= -Wall -g

all: mains maind mymathd mymaths

mains: main.o mymaths
	$(CC) $(FLAGS) -o mains main.o libmyMath.a

maind: main.o mymathd
	$(CC) $(FLAGS) -o maind main.o ./libmyMath.so

mymaths:libmyMath.a
mymathd:libmyMath.so

libmyMath.a: power.o basicMath.o
	ar  -rcs libmyMath.a power.o basicMath.o
libmyMath.so: power.o basicMath.o
	gcc -shared -o libmyMath.so  power.o basicMath.o

main.o: main.c myMath.h
	$(CC)  $(FLAGS) -c main.c
        
basicMath.o: basicMath.c myMath.h
	$(CC)  $(FLAGS) -c basicMath.c

power.o: power.c myMath.h
	$(CC) $(FLAGS) -c power.c
	
.PHONY: clean all mymathd mymaths

clean: 
	rm -f *.o *.a *.so mains maind 

