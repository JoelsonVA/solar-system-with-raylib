CXX = g++
CXXFLAGS = -Wall -std=c++17
LIBS = -lraylib -lGL -lm -lpthread -ldl -lrt -lX11

SRC = main.cpp Sun.cpp Planets.cpp Sun.h Planets.h
OUT = teste

all:
	$(CXX) $(CXXFLAGS) $(SRC) -o $(OUT) $(LIBS)

run: all
	./$(OUT)

clean:
	rm -f $(OUT)


