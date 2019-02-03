#
#  -g    adds debugging information to the executable file
#  -Wall turns on most, but not all, compiler warnings
#
# for C++ define  CC = g++
CC = g++
CFLAGS  = -g -Wall

# typing 'make' will invoke the first target entry in the file 
# (in this case the default target entry)
# you can name this target entry anything, but "default" or "all"
# are the most commonly used names by convention
#
default: main

# To create the executable file count we need the object files
# main.o, and LRUCache.o:
#
main:  main.o LRUCache.o
	$(CC) $(CFLAGS) -o main main.o LRUCache.o

# To create the object file LRUCache.o, we need the source files
# LRUCache.c and LRUCache.h:
#
LRUCache.o:  LRUCache.cpp LRUCache.h 
	$(CC) $(CFLAGS) -c LRUCache.cpp

clean: 
	$(RM) count *.o *~