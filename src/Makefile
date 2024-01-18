#OBJS
OBJS = main.cpp

#CC
CC = g++ -std=c++23

#COMPILER_FLAGS 
COMPILERFLAGS = -Wall

#LINKER_FLAGS specifies the libraries we're linking against
LINKER_FLAGS = -lSDL2

#OBJ_NAME specifies the name of our exectuable
OBJ_NAME = game

test : 
	$(CC) $(OBJS) $(COMPILER_FLAGS) -fsanitize=address $(LINKER_FLAGS) -o $(OBJ_NAME) -g

release : 
	$(CC) $(OBJS) $(COMPILER_FLAGS) -o3 $(LINKER_FLAGS) -o $(OBJ_NAME) -s

run : test
	./game

debug : test
	gdb $(OBJ_NAME)


