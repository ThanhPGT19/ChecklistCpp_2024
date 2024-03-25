OBJ := ./obj/
CC := g++
SRC := ./src/
INC := ./inc/
C_FLAG := -I$(INC)
FILE := $(INC)vector.cpp $(INC)vector.h
 

run: $(OBJ)main.o
	$(CC) -o exam $<  

$(OBJ)%.o : $(SRC)%.cpp $(FILE) 
	$(CC) -c $< -o $@ $(C_FLAG) 

clean:
	rm -rf *.exe ./lib/*.a $(OBJ)*.o

