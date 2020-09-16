all : morse0

morse0 : morse.c main.c
	gcc $^ -o morse

clean :
	rm *.o
