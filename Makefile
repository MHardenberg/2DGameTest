#OBJS
OBJS = src/main.cpp
#CC
CC = g++ -std=c++23

#COMPILER_FLAGS 
COMPILERFLAGS = -Wall -Wextra -Wpedantic

#LINKER_FLAGS specifies the libraries we're linking against
LINKER_FLAGS = -lSDL2

#OBJ_NAME specifies the name of our exectuable
OBJ_NAME = ./bin/game.out

devel : 
	$(CC) $(OBJS) $(COMPILER_FLAGS) -fsanitize=address $(LINKER_FLAGS) -o $(OBJ_NAME) -g

release : 
	$(CC) $(OBJS) $(COMPILER_FLAGS) -o3 $(LINKER_FLAGS) -o $(OBJ_NAME) -s

debug : devel
	gdb ./bin/game.out
