build: 
	g++ -c -o calculator.o calculator.cpp; g++ -o calculator calculator.o
	g++ -c -o functions.o functions.cpp; g++ -o functions functions.o
	g++ -c -o dayofmonth.o dayofmonth.cpp; g++ -o dayofmonth dayofmonth.o
	g++ -c -o funny.o funny.cpp; g++ -o funny funny.o
	g++ -c -o acumulator.o acumulator.cpp; g++ -o acumulator acumulator.o
	g++ -c -o exvector.o exvector.cpp; g++ -o exvector exvector.o
	g++ -c -o amo.o amo.cpp; g++ -o amo amo.o
	g++ -c -o multiplesofsix.o multiplesofsix.cpp; g++ -o multiplesofsix multiplesofsix.o
	g++ -c -o rand.o rand.cpp; g++ -o rand rand.o
	g++ -c -o sqrtsinlog.o sqrtsinlog.cpp; g++ -o sqrtsinlog sqrtsinlog.o
.PHONY: