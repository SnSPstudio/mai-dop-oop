all: a.out

a.out: main.o TJenny.o TTruck.o TCrane.o TCargo.o global.o
	g++ main.o TJenny.o TTruck.o TCrane.o TCargo.o global.o -o a.out

main.o:	../src/main.cpp
	g++ -c ../src/main.cpp

TJenny.o: ../src/TJenny.cpp
	g++ -c ../src/TJenny.cpp

TTruck.o: ../src/TTruck.cpp
	g++ -c ../src/TTruck.cpp

TCrane.o: ../src/TCrane.cpp
	g++ -c ../src/TCrane.cpp

TCargo.o: ../src/TCargo.cpp
	g++ -c ../src/TCargo.cpp

global.o: ../src/global.cpp
	g++ -c ../src/global.cpp