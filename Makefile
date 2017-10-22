build: 
	g++ -c -o calculator.o calculator.cpp; g++ -o calculator calculator.o
	g++ -c -o functions.o functions.cpp; g++ -o functions functions.o
	g++ -c -o dayofmonth.o dayofmonth.cpp; g++ -o dayofmonth dayofmonth.o
	g++ -c -o funny.o funny.cpp; g++ -o funny funny.o
.PHONY: build