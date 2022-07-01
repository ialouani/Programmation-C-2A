GCC=g++ -g3 -O0
all2: lancement2
all: lancement 
verify: Point.h
	$(GCC) $< -o $@
verify2.o: Point.cpp
	$(GCC) -c -o $@ $^
verify4.o: Point2.cpp
	$(GCC) -c -o $@ $^
lancement: verify2.o main.cpp verify
	${GCC} verify2.o main.cpp -o $@
lancement2: verify4.o main2.cpp
	$(GCC) verify4.o main2.cpp -o $@
clear_all: clean
	clear && clear && clear
clean:
	rm -f Makefile~ *.cpp~ *.h.gch verify *.o *.cpp~ lancement lancement2 *.h~
