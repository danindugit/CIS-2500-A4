CC=gcc
CFLAGS=-Wall -std=c99

a4: queueFunctions.o miscFunctions.o testA4.o
	$(CC) queueFunctions.o miscFunctions.o testA4.o -o a4

gueueFunctions.o: queueFunctions.c headerA4.h
	$(CC) $(CFLAGS) -c queueFunctions.c

miscFunctions.o: miscFunctions.c headerA4.h
	$(CC) $(CFLAGS) -c miscFunctions.c

testA4.o: testA4.c headerA4.h
	$(CC) $(CFLAGS) -c testA4.c

clean:
	rm *.o a4