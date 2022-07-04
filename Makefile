#!/bin/bash
cyan = /bin/echo -e "\x1b[36m\#\# $1\x1b[0m"

GXX =g++ 
VERSION_XX= -std=c++11
VRS2GXX= -std=c++17
INCLUDE =-I.

all: colors7 test_one all2
all2: one second three four five_all colors2 six seven colors5 colors6 eight test_one colors7
test_one: ex1.cpp
	${GXX} ${VRS2GXX} ex1.cpp -o $@
colors2:
	@$(call cyan,"principe privée par défaut ainsi que le reste pour les instanciations direct comme les struct.##")
colors5:
	@$(call cyan,"compilation des le depart le namespace est inclus donc limplementation se fera dans le nom du namespacepointh##")
colors6:
	@$(call cyan,"encapsulation ettributs privees getting setting EXEMPLES/+++..///##")
colors7: nine.h
	@$(call cyan,"trivial  tests  for the C++ developper beginners    EXEMPLES##")
one: first.cpp
	./ell.sh
	g++ -std=c++11 $< -o $@g
second: second.cpp
	g++ -std=c++11 $< -o $@
three: three.cpp
	g++ -std=c++11 $^ -o three
four: four.cpp
	g++ -std=c++11 four.cpp -o four
five_all: five.cpp five_Other.cpp
	g++ -I. -std=c++11 -o five $<
	@$(call cyan, "suivante!!.....##")
	g++ -I. -std=c++11 five_Other.cpp -o five2
six: 	six_all.cpp
	g++ -std=c++11 $^ -o $@
seven: eight_all_end.cpp seven.cpp
	${GXX} ${VERSION_XX} $(INCLUDE) $^ -o $@
eight:   colors6 colors7 eight_all_end.cpp eight.cpp main2.cpp seven.h 
	${GXX} ${VERISON_XX} ${INCLUDE} -o $@ main2.cpp eight_all_end.cpp
	g++ -std=c++17 ex1.cpp -o test_one
	g++ -std=c++17 ex2.cpp -o test_two
	@$(call cyan,"trivial  tests  for the C++ developper beginners    EXEMPLES-1/4*****##")
	@$(call cyan,"trivial  tests  for the C++ developper beginners    EXEMPLES##-2/4******####")
set: set colors7
	clear && clear && clear ; rm -rf *.txt~ oneg test_one eight  *.h~ *.h.hgz *.h.gch *.cpp~ Makefile~ summary.txt~ test_two  a.out one second three four five five2 six *.sh~ seven ; ./ell.sh && echo -n  -e  "===========================================FIRST ENDEND UP PART"


