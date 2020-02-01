oneWord.exe: oneWord.o
	g++ -o oneWord.exe -Wall -pedantic oneWord.o

oneWord.o: oneWord.cpp
	g++ -c -std=c++11 -Wall -pedantic oneWord.cpp 
clean:
	rm *.o
