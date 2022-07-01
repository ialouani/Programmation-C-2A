GCC=g++ -g3 -O0
mini_project:
	g++ Point.cpp main.cpp -o one
	g++ Point2.cpp main2.cpp -o two
	g++ Point3.cpp main3.cpp -o three
	g++ Point4.cpp main4.cpp -o four
all4: lancement4
all3: lancement3
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
verify6.o: Point3.cpp
	$(GCC) -c $< -o verify6.o
verify8.o: Point4.cpp
	$(GCC) -c $< -o verify8.o
lancement3: verify6.o main3.cpp
	${GCC} -o $@ $^
lancement4: verify8.o main4.cpp
	g++ -o $@ $^
clear_all: clean
	clear && clear && clear
clean:
	rm -f Makefile~ *.cpp~ *.h.gch verify *.o *.cpp~ lancement lancement2 *.h~ a.out lancement3 lancement4 one two three four
