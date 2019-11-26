.SUFFIXES: .cpp .o

OBJECTS = json_object.o data/Integer.o data/String.o json_list.o json_dict.o
MAIN = main.o $(OBJECTS)

CXX = g++

DATA = data
TARGET = test

$(TARGET) : $(MAIN)
	$(CXX) -o $(TARGET) $(MAIN)

clean :
	rm -rf $(MAIN) $(TARGET)
