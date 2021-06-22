CXX=g++
CXXFLAGS=-std=c++17 -Wpedantic -Wall -Wextra -Werror -Weffc++ -Wzero-as-null-pointer-constant
OPTIMIZE=-O2
FILES=main.cpp
TARGET=flappybird
LIBRARIES=-l sfml-graphics -l sfml-window -l sfml-system

all: $(TARGET)
$(TARGET): $(FILES)
	$(CXX) $(CXXFLAGS) $(OPTIMIZE) $(FILES) -o $(TARGET) $(LIBRARIES)

run: $(TARGET)
	valgrind ./$(TARGET)

clean:
	/bin/rm -f $(TARGET)
