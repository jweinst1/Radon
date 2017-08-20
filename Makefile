CC = g++
CPPFLAGS =	-std=c++11
CPPLINK = -lstdc++
INC_DIR = headers
CFLAGS =  -c -Wall -I$(INC_DIR)

objs: lib/RadInt.o

lib/RadInt.o: objects/RadInt.cpp $(INC_DIR)/Radon.h; $(CC) $(CPPFLAGS) $(CFLAGS) objects/RadInt.cpp -o $@