all: main.o
	gcc -o args main.c 

main.o: main.c
	gcc -c main.c

run:
	./args

clean:
	rm *.o
	
debug: main.c
	gcc -g main.c

gdb: a.out
	gdb a.out