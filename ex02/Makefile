# 'make distclean' will remove all built files
# 'make distclean all DEBUG=1' will build debug versions of everything
#
DEBUG ?= 0
CXX=g++
CPPFLAGS=
CXXFLAGS=-std=c++11 -Wall -Wextra -pedantic -m64 -march=x86-64 -mtune=generic -pipe
LIBS=
ifeq ($(DEBUG),1)
CXXFLAGS += -O0 -ggdb3
LDFLAGS=-ggdb3
else
CXXFLAGS += -O3 -m64
LDFLAGS=-s
endif
OBJECTS:=ArrayList.o main.o
EXECUTABLES:=$(OBJECTS:.o=)

program:	ArrayList.o main.o
	$(CXX) $(LDFLAGS) ArrayList.o main.o  -o program

main.o:	main.cpp
	$(CXX) $(CPPFLAGS) $(CXXFLAGS) -o $@ -c $<

ArrayList.o:	ArrayList.cpp
	$(CXX) $(CPPFLAGS) $(CXXFLAGS) -o $@ -c $<

%.o: %.cpp
	$(CXX) $(CPPFLAGS) $(CXXFLAGS) -o $@ -c $<

clean:
	rm -f $(OBJECTS)

distclean:	clean
	rm -f program core

