BIN=run

all: compile


compile: code.o
	g++ -o run code.o

code.o: code.cpp
	g++ -c code.cpp -o code.o

clean:
	rm *.o run

