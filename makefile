laucher: Laucher.o
	g++ -o laucher Laucher.o
Laucher.o: Laucher.cpp
	g++ -c Laucher.cpp
clean:
	rm *.o laucher
