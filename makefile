projectassignment: main.cpp noisegate.o processor.o echo.o normalizer.o

noisegate.o: noisegate.cpp noisegate.h
	g++ -c -std=c++11 noisegate.cpp

Processor.o: processor.cpp Processor.h
	g++ -c -std=c++11 processor.cpp

echo.o: echo.cpp echo.h
	g++ -c -std=c++11 echo.cpp

normalizer.o: normalizer.cpp normalizer.h
	g++ -c -std=c++11 normalizer.cpp

clean:

	rm *.o projectassignment
