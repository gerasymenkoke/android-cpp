hello: hello.cpp
	$(CXX) -Wall -Wextra -Wpedantic -std=c++17 hello.cpp -o hello
ls - l hello
clean:
	rm -f *.o hello

all: hello

.PHONY: clean all
