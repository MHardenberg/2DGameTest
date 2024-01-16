#OBJS
OBJS = main.cpp game.cpp gamemap.cpp gui/window.cpp

#CC
CC = g++

#COMPILER_FLAGS 
COMPILERFLAGS = -Wall

#LINKER_FLAGS specifies the libraries we're linking against
LINKER_FLAGS = -lSDL2

#OBJ_NAME specifies the name of our exectuable
OBJ_NAME = game

build : 
	$(CC) $(OBJS) $(COMPILER_FLAGS) $(LINKER_FLAGS) -o $(OBJ_NAME)

run : build
	./game
