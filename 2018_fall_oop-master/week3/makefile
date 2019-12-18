OBJECTS = main.o apple.o orange.o

CC = g++
CPLAGS = -c
TARGET = main
	
$(TARGET): $(OBJECTS)
		$(CC) -o $(TARGET) $(OBJECTS)

clean: 
		rm -f $(OBJECTS) $(TARGET)

main.o : main.cpp
apple.o : apple.cpp
orange.o : orange.cpp



