all: run

clean:
	rm -rf run

run: l2.cpp
	c++-17 main.cpp -o run

fire:
	./run