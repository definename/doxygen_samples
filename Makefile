.PHONY: all clean docs

all:
	mkdir -p ./build
	cd ./build && cmake .. -DCMAKE_BUILD_TYPE=Debug && cmake --build .

clean:
	rm -rf ./build
	rm -rf ./docs

docs:
	doxygen Doxyfile
