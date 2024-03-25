OBJECTS= ./build/compiler.o ./build/cprocess.o ./build/helpers/buffer.o ./build/helpers/vector.o 
INCLUDES= -I./

all: ${OBJECTS}
	gcc src/main.c ${INCLUDES} ${OBJECTS} -g -o ./main

./build/compiler.o: ./src/compiler.c
	gcc src/compiler.c ${INCLUDES} -o ./build/compiler.o -g -c

./build/cprocess.o: ./src/cprocess.c
	gcc src/cprocess.c ${INCLUDES} -o ./build/cprocess.o -g -c

./build/helpers/buffer.o: ./src/helpers/buffer.c
	gcc ./src/helpers/buffer.c ${INCLUDES} -o ./build/helpers/buffer.o -g -c

./build/helpers/vector.o: ./src/helpers/vector.c
	gcc ./src/helpers/vector.c ${INCLUDES} -o ./build/helpers/vector.o -g -c

clean:
	rm ./main
	rm -rf ${OBJECTS}