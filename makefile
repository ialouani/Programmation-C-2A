#!/bin/bash
cyan = /bin/echo -e "\x1b[36m\#\# $1\x1b[0m"

GXX =g++ 
VERSION_XX= -std=c++11
INCLUDE =-I.

all: one second three four five_all colors2 six seven
colors2:
	@$(call cyan,"principe privée par défaut ainsi que le reste pour les instanciations direct comme les struct.##")
colors5:
	@$(call cyan,"compilation des le depart le namespace est inclus donc limplementation se fera dans le nom du namespacepointh##")
one: first.cpp
	./ell.sh
	g++ -std=c++11 $< -o $@
second: second.cpp
	g++ -std=c++11 $< -o $@
three: three.cpp
	g++ -std=c++11 $^ -o three
four: four.cpp
	g++ -std=c++11 four.cpp -o four
five_all: five.cpp five_Other.cpp
	g++ -I. -std=c++11 -o five $<
	@echo "suivante!!....."
	g++ -I. -std=c++11 five_Other.cpp -o five2
six: 	six_all.cpp
	g++ -std=c++11 $^ -o $@
seven: seven_all.cpp seven.cpp seven.h colors5
	${GXX} ${VERSION_XX} ${INCLUDE} seven_all.cpp seven.cpp -o seven
set:
	clear && clear && clear ; rm -rf *.h~ *.h.hgz *.cpp~ Makefile~ summary.txt~ a.out one second three four five five2 six *.sh~ seven ; ./ell.sh 



