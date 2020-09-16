all : morse0

morse0 : morse.c main.c
	gcc morse.c main.c -o morse

clean :
	rm *.o
