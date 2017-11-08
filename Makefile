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
	g++ -c -o swithcase.o swithcase.cpp; g++ -o swithcase swithcase.o
	g++ -c -o while.o while.cpp; g++ -o while while.o
	g++ -c -o ifcomp.o ifcomp.cpp; g++ -o ifcomp ifcomp.o
	g++ -c -o vogal.o vogal.cpp; g++ -o vogal vogal.o
	g++ -c -o library.o library.cpp; g++ -o library library.o
	g++ -c -o comparing.o comparing.cpp; g++ -o comparing comparing.o
	g++ -c -o concatenate.o concatenate.cpp; g++ -o concatenate concatenate.o 
	g++ -c -o characnull.o characnull.cpp; g++ -o characnull characnull.o
	g++ -c -o charsimple.o charsimple.cpp; g++ -o charsimple charsimple.o
	g++ -c -o colors.o colors.cpp; g++ -o colors colors.o
	g++ -c -o sum.o sum.cpp; g++ -o sum sum.o
	g++ -c -o opt.o opt.cpp; g++ -o opt opt.o
.PHONY: