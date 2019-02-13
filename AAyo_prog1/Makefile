

run: aayo_prog1.o aayo_argtok.o
	gcc aayo_prog1.o aayo_argtok.o -o run 

aayo_prog1.o: aayo_prog1.c
	gcc -c aayo_prog1.c

aayo_argtok.0: aayo_argtok.c aayo_argtok.h
	gcc -c aayo_argtok.c

clean:
	rm *.o $(objects) run

