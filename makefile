all : morse0 blink

morse0 : morse.o main.c
	gcc $^ -o morse

morse.o : morse.c
	gcc $^ -c

# Pris du makefile sur github
blink : blink_del.c
	gcc $^ -o $@ -L/usr/local/lib -lwiringPi -lwiringPiDev -lpthread -lm -lcrypt -lrt

clean :
	rm *.o
