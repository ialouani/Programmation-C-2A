all: one second three four five_all
one: first.cpp
	g++ -std=c++11 $< -o $@
second: second.cpp
	g++ -std=c++11 $< -o $@
three: three.cpp
	g++ -std=c++11 $^ -o three
four: four.cpp
	g++ -std=c++11 four.cpp -o four
five_all: five.cpp five_Other.cpp
	g++ -I. -std=c++11 -o five $<
	@echo "suivante:...."
	g++ -I. -std=c++11 five_Other.cpp -o five2
clean_code:
	rm -rf *.h~ *.h.hgz *.cpp~ Makefile~ summary.txt~ a.out one second three four five five2
