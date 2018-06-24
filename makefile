default: bin/irverbs

test: bin/ir_test
	bin/ir_test

bin/irverbs: build/main.o build/isLetter.o build/game.o build/printMas.o build/verbInit.o
	gcc -Wall -Werror build/main.o build/isLetter.o build/game.o build/printMas.o build/verbInit.o -o bin/irverbs 

bin/ir_test: build/main_test.o build/isLetter.o build/game.o build/printMas.o build/verbInit.o
	gcc -Wall -Werror build/main_test.o build/isLetter.o build/game.o build/printMas.o build/verbInit.o -o bin/ir_test

build/main.o: src/main.c
	gcc -std=c99 -Wall -Werror -c src/main.c -o build/main.o

build/isLetter.o: src/isLetter.c
	gcc -std=c99 -Wall -Werror -c src/isLetter.c -o build/isLetter.o

build/game.o: src/game.c
	gcc -std=c99 -Wall -Werror -c src/game.c -o build/game.o

build/printMas.o: src/printMas.c
	gcc -std=c99 -Wall -Werror -c src/printMas.c -o build/printMas.o

build/verbInit.o: src/verbInit.c
	gcc -std=c99 -Wall -Werror -c src/verbInit.c -o build/verbInit.o

build/main_test.o: test/main.c
	gcc -std=c99 -I thirdparty -I src -c test/main.c -o build/main_test.o

.PHONY : clean
clean:
	rm -rf build/*.o
