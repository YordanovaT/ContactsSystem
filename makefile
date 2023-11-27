source.out: source.o address_book.o person.o friend.o
	g++ source.o address_book.o person.o friend.o -o source.out

source.o: source.cpp
	g++ -c source.cpp

address_book.o: address_book.cpp
	g++ -c address_book.cpp

person.o: person.cpp
	g++ -c person.cpp

friend.o: friend.cpp
	g++ -c friend.cpp

clean:
	rm *.o source.out