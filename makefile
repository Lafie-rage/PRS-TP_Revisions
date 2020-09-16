all : morse0

morse0 : morse.o main.c
	gcc $^ -o morse


morse.o : morse.c
	gcc $^ -c

clean :
	rm *.o
