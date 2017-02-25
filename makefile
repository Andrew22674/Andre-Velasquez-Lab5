exec:	main.o funcionP.o
	g++ main.o funcionP.o -o exec

main.o:	main.cpp funcionP.h
	g++ -c main.cpp

funcionP.o:	funcionP.cpp funcionP.h
	g++ -c funcionP.cpp

clean:
	rm *.o exec
