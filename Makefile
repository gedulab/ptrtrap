all: ptrtrap ptrtrapr

ptrtrap: ptrtrap.c parser.c
	gcc -g -o $@ $^

ptrtrapr: ptrtrap.c parser.c
	gcc -o $@ $^

clean:
	rm ptrtrap ptrtrapr

