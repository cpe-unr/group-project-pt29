projectassignment: main.cpp noisegate.o processor.o echo.o normalizer.o wav.o WaveHeader.h
	g++ -std=c++17 main.cpp noisegate.o processor.o echo.o normalizer.o wav.o WaveHeader.h -o projectassignment -lstdc++fs


wav.o: wav.cpp Wav.h
	g++ -c -std=c++17 wav.cpp -lstdc++fs

noisegate.o: noisegate.cpp noisegate.h
	g++ -c -std=c++17 noisegate.cpp -lstdc++fs

Processor.o: processor.cpp Processor.h
	g++ -c -std=c++17 processor.cpp -lstdc++fs

echo.o: echo.cpp echo.h
	g++ -c -std=c++17 echo.cpp -lstdc++fs

normalizer.o: normalizer.cpp normalizer.h
	g++ -c -std=c++17 normalizer.cpp -lstdc++fs 


