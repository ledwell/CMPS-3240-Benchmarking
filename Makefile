# This is a comment

# Reasons to use a makefile:
#	1) Saves having to repeatedly enter the same command. e.g.
#		Instead of: gcc -o hello.out -c hello.o other.o ...
#		Type it once in a makefile and: make hello.out
#		Easier.
#	2) You can have some advanced scripting going on with a makefile

# The first part of a makefile should contain, by convention, any variables 
# you intend to use. You might wonder, why do I need variables in my makefile? 
# Because it provides a convienient place to change things. For example, let's 
# say you want to use clang instead of gcc. You would just create a compiler 
# variable and change it in this central place. *Don't actually change this to 
# clang, that was just an example. Leave it as gcc.*

# This is a variable called CC that will hold the compiler we intend to use
CC=gcc

# This is a variable called CFLAGS that holds the flags we want to pass to the 
# compiler. Note that when you declare a varaible that it counts white space, 
# so CFLAGS literally is "-Wall -O0"
CFLAGS=-Wall -O0

.SUFFIXES: .ccp .o

all: test_fdot test_iaxpy test_dgemm

test_fdot: test_fdot.c
	g++ -g -o test_fdot test_fdot.c


test_iaxpy: test_iaxpy.c
	g++ -g -o test_iaxpy test_iaxpy.c

test_dgemm: test_dgemm.c
	g++ -g -o test_dgemm test_dgemm.c
clean:
	rm test_fdot test_iaxpy test_dgemm
