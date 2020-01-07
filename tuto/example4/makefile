CC = g++
CFLAGS = -lm -Wall -g

all: main_min main_max

main_min: main_min.cpp foo.o bar.o
	$(CC) $(CFLAGS) main_min.cpp foo.o bar.o -o main_min
main_max: main_max.cpp foo.o bar.o
	$(CC) $(CFLAGS) main_max.cpp foo.o bar.o -o main_max
foo.o: foo.cpp
	$(CC) $(CFLAGS) -c foo.cpp
bar.o: bar.cpp
	$(CC) $(CFLAGS) -c bar.cpp

clean:
	rm *.o main_min main_max
