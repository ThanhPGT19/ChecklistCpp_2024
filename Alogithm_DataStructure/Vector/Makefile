OBJ := ./obj/
CC := g++
SRC := ./src/
INC := ./inc/
C_FLAG := -I$(INC)
FILE := $(INC)vector.cpp $(INC)vector.h
 
# Ensure the obj directory exists
$(shell mkdir -p $(OBJ))

run: $(OBJ)main.o
	$(CC) -o exam $<  

$(OBJ)%.o : $(SRC)%.cpp $(FILE) 
	$(CC) -c $< -o $@ $(C_FLAG) 

clean:
	rm -rf exam ./lib/*.a $(OBJ)*.o

