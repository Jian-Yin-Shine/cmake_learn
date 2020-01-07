CC = g++
CFLAGS = -lm -Wall -g
main: main.cpp foo.o bar.o
	$(CC) $(CFLAGS) main.cpp foo.o bar.o -o main
foo.o: foo.cpp
	$(CC) $(CFLAGS) -c foo.cpp
bar.o: bar.cpp
	$(CC) $(CFLAGS) -c bar.cpp

clean:
	rm *.o main
