EXE=dungeon
OBJECTS=main.o
CC=g++
FLAGS=-I./ -O3

$(EXE): $(OBJECTS)
	$(CC) $(FLAGS) $(OBJECTS) -o $(EXE)

%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@
