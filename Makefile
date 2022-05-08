CXX?=g++ 
CXXFLAGS+=--std=c++17 -O3 -Wall -Wextra -I.
SOURCES=src/main.cpp src/PersegiPanjang.cpp

src/%.o: src/%.cpp 
	$(CXX) $(CXXFLAGS) -c -o $@ $<

rec: $(SOURCES:.cpp=.o)
	$(CXX) $(CXXFLAGS) -o $@ $^

clean:
	rm -f src/*.o