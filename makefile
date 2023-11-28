source.out: source.o address_book.o person.o friend.o collegue.o
	g++ source.o address_book.o person.o friend.o collegue.o -o source.out

source.o: source.cpp
	g++ -c source.cpp

address_book.o: address_book.cpp
	g++ -c address_book.cpp

person.o: person.cpp
	g++ -c person.cpp

friend.o: friend.cpp
	g++ -c friend.cpp

collegue.o: collegue.cpp
	g++ -c collegue.cpp

clean:
	rm *.o source.out