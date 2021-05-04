Executable: CurveCalculator.o UnitConversion.o HorizonDistanceCalculator.o
	g++ CurveCalculator.o UnitConversion.o HorizonDistanceCalculator.o -o HorizonDistanceCalculator.x

CurveCalculator.o: CurveCalculator.cc CurveCalculator.h
	g++ -c CurveCalculator.cc

UnitConversion.o: UnitConversion.cc UnitConversion.h
	g++ -c UnitConversion.cc

HorizonDistanceCalculator.o: HorizonDistanceCalculator.cpp
	g++ -c HorizonDistanceCalculator.cpp

clean_obj:
	rm *.o 
clean_exe:
	rm HorizonDistanceCalculator.x
