# Specify compiler
CC=gcc

# Specify linker
LINK=gcc

.PHONY : all
all : app

# Link object files into a binary
app : main.o class1.o
	$(LINK) -o app main.o class1.o -lstdc++

# Compile the source file to object files
main.o : main.cpp
	$(CC) -c main.cpp -o main.o

class1.o : class1.cpp
	$(CC) -c class1.cpp -o class1.o

# Clean target
.PHONY : clean
clean :
	rm main.o class1.o app