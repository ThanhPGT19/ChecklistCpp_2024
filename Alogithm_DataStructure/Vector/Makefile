OBJ := ./obj/*.o
CC := g++
SRC := ./src/%.cpp
INC := ./inc/
C_FLAG := -I$(INC)

run :main.o vector.o vector.a link
	./exam

%.o : $(SRC) $(INC)
	$(CC) -c $< -o ./obj/$@ $(C_FLAG)

vector.a:
	ar rcs ./lib/$@ ./obj/vector.o

link: main.o
	$(CC) ./obj/$< -Llib/ -l:vector.a -o exam

clean:
	rm -rf *.exe ./lib/*.a $(OBJ)

