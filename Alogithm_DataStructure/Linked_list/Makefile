INC := ./inc/
SRC := ./src/
OBJ := ./obj/
BIN := ./bin/
C_FLAG := -I$(INC)
FILE := $(INC)*.cpp $(INC)*.h
CC := g++

run : $(OBJ)main.o
	$(CC) -o $(BIN)exam $< $(C_FLAG)

run1:
	$(BIN)exam
$(OBJ)%.o : $(SRC)%.cpp $(FILE)
	$(CC) -c $< -o $@ $(C_FLAG)

clean: 
	rm -rf $(OBJ)*.o $(BIN)*.exe
