hello: hello.cpp
	$(CXX) -Wall -Wextra -Wpedantic -std=c++17 hello.cpp -o /home/runner/work/android-cpp/android-cpp/.github/workflows



clean:
	rm -f *.o hello

all: hello


.PHONY: clean all
