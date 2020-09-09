all : morse0

morse0 : main.o
	gcc $^ -o morse

main.o : main.c
	gcc $^ -c

clean :
	rm *.o
