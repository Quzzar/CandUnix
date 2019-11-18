
run: main.o source.o
	gcc -o run main.c source.c

main.o: main.c
	gcc -c main.c -Wall

source.o: source.c header.h
	gcc -c source.c -Wall

clean:
	rm *.o run