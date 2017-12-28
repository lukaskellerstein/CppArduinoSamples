
app.out: main.o mypackage1.o
	g++ main.o somefile.o -o app.out

main.o:	main.cpp
	g++ -c main.cpp

mypackage1.o: mypackage1/somefile.cpp mypackage1/mypackage1.h
	g++ -c mypackage1/somefile.cpp

clean:
	rm *.o app.out