.SUFFIXES: .cpp .o

OBJECTS = Integer.o Float.o Complex.o test.o

CXX = g++
CPPFLAGS = -c

TARGET = numTest

$(TARGET) : $(OBJECTS)
	$(CXX) -o $(TARGET) $(OBJECTS)

clean :
	rm -rf $(OBJECTS) $(TARGET)


Integer.o = Integer.cpp
Float.o = Float.cpp
Complex.o = Complex.cpp
test.o = test.cpp
