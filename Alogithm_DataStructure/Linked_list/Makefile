INC := ./inc/
SRC := ./src/
OBJ := ./obj/
BIN := ./bin/
C_FLAG := -I$(INC)
FILE := $(INC)*.cpp $(INC)*.h
g++ := CC

run : $(OBJ)main.o
	$(CC) -o $(BIN)exam $< $(C_FLAG)

$(OBJ)%.o : $(SRC)%.cpp $(FILE)
	$(CC) -c $< -o $@ $(C_FLAG)

clean: 
	rm -rf $(OBJ)*.o $(BIN)*.exe
