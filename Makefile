hello: hello.cpp
	$(CXX) -Wall -Wextra -Wpedantic -std=c++17 hello.cpp -o hello



clean:
	rm -f *.o hello

all: hello
$pwd

.PHONY: clean all
