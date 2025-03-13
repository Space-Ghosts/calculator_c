EXE := calc

build:
	gcc -Wall -Werror -Wextra add.c subtract.c multiply.c divide.c modulo.c calc.c -o $(EXE)

update:
	rm $(EXE)
	gcc -Wall -Werror -Wextra add.c subtract.c multiply.c divide.c modulo.c calc.c -o $(EXE)

clean:
	rm $(EXE)

run:
	@./$(EXE)