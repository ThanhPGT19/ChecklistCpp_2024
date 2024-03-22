OBJ := ./obj/
CC := g++
SRC := ./src/
INC := ./inc/
C_FLAG := -I$(INC)

#run :
#	$(CC) -o exam $(SRC)main.cpp $(C_FLAG) 

run1: $(OBJ)main.o $(INC)vector.cpp $(INC)vector.h
	$(CC) -o exam $<  

$(OBJ)%.o : $(SRC)%.cpp 
	$(CC) -c $< -o $@ $(C_FLAG) 

vector.a:
	ar rcs ./lib/$@ ./obj/vector.o $(C_FLAG)

link: main.o
	$(CC) ./obj/$< -Llib/ -l:vector.a -o exam

clean:
	rm -rf *.exe ./lib/*.a $(OBJ)*.o

