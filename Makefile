CXX=g++
CXXFLAGS=-Wall -Wextra -Wpedantic
LDFLAGS=

INSTALL_DIR=/usr/local/bin

all: cyp2txt txt2cyp

cyp2txt: cyp2txt.cpp cypher.o
	$(CXX) cypher.o cyp2txt.cpp $(CXXFLAGS) $(LDFLAGS) -o cyp2txt

txt2cyp: txt2cyp.cpp cypher.o
	$(CXX) cypher.o txt2cyp.cpp $(CXXFLAGS) $(LDFLAGS) -o txt2cyp

cypher.o: cypher.cpp cypher.hpp
	$(CXX) -c cypher.cpp $(CXXFLAGS) -o cypher.o

clean:
	rm cyp2txt txt2cyp cypher.o

install: txt2cyp cyp2txt
	cp txt2cyp $(INSTALL_DIR)/txt2cyp
	cp cyp2txt $(INSTALL_DIR)/cyp2txt

uninstall:
	rm -i $(INSTALL_DIR)/txt2cyp $(INSTALL_DIR)/cyp2txt
