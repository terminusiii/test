# Specify compiler
CC=gcc -g

# Specify linker
LINK=gcc -static -lpthread

.PHONY : all
all : app

# Link object files into a binary
app : main.o class1.o class2.o crossdresser.o linkedList.o
	$(LINK) -o app main.o class1.o class2.o crossdresser.o linkedList.o -lstdc++

# Compile the source file to object files
main.o : main.cpp
	$(CC) -c main.cpp -o main.o

class1.o : class1.cpp
	$(CC) -c class1.cpp -o class1.o

class2.o : class2.cpp
	$(CC) -c class2.cpp -o class2.o 

crossdresser.o : crossdresser.cpp
	$(CC) -c crossdresser.cpp -o crossdresser.o

linkedList.o : linkedList.cpp
	$(CC) -c linkedList.cpp -o linkedList.o

# Clean target
.PHONY : clean
clean :
	rm main.o class1.o class2.o crossdresser.o linkedList.o app
