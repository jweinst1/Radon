CC = g++
CPPFLAGS =	-std=c++11
CPPLINK = -lstdc++
INC_DIR = headers
CFLAGS =  -c -Wall -I$(INC_DIR)

objs: lib/TypeMaps.o

lib/TypeMaps.o: source/parser/TypeMaps.cpp $(INC_DIR)/Radon.h; $(CC) $(CPPFLAGS) $(CFLAGS) source/parser/TypeMaps.cpp -o $@