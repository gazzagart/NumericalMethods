CXX		  := g++
CXX_FLAGS := -Wall -Wextra -std=c++17 -ggdb

BIN		:= bin
SRC		:= $(wildcard src/*.cpp)
INCLUDE	:= include
LIB		:= lib

LIBRARIES	:=
EXECUTABLE	:= main


all: $(BIN)\$(EXECUTABLE)

run: clean all
	cls
	.\$(BIN)\$(EXECUTABLE)

$(BIN)\$(EXECUTABLE): $(SRC)
	$(CXX) $(CXX_FLAGS) -I$(INCLUDE) -L$(LIB) $^ -o $@ $(LIBRARIES)

clean:
	del $(BIN)\*


# CXX		  := g++
# CXX_FLAGS := -Wall -Wextra -std=c++17 -ggdb

# BIN		:= bin
# SRC		:= $(wildcard src/*.cpp)
# INCLUDE	:= include
# LIB		:= lib

# LIBRARIES	:=
# EXECUTABLE	:= main


# all: $(BIN)/$(EXECUTABLE)

# run: clean all
# 	clear
# 	./$(BIN)/$(EXECUTABLE)

# $(BIN)/$(EXECUTABLE): $(SRC)
# 	$(CXX) $(CXX_FLAGS) -I$(INCLUDE) $^ -o $@ $(LIBRARIES)

# clean:
# 	-rm $(BIN)/*

