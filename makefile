CXX = g++
CXXFLAGS = -Wall -Wextra
SRC = ./src/*.cpp ./src/*.hpp
EXEC = sudoku

$(EXEC) : $(SRC)
	$(CXX) $(CXXFLAGS) -o $@ $^
