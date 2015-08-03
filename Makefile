CC = g++
LIBS = -lX11 -pthread

default:
	$(CC) main.cpp $(LIBS)

run: default
	./a.out
