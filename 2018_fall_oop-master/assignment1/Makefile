assignment1 : Main.o Candy.o Cookie.o dessertItem.o Icecream.o Sundae.o
	g++ -o assignment1 Main.o Candy.o Cookie.o Icecream.o Sundae.o dessertItem.o

Main.o : Main.cpp
	g++ -c -o Main.o Main.cpp
dessertItem.o : dessertItem.cpp
	g++ -c -o dessertItem.o dessertItem.cpp
Cookie.o : Cookie.cpp
	g++ -c -o Cookie.o Cookie.cpp
Candy.o : Candy.cpp
	g++ -c -o Candy.o Candy.cpp
Icecream.o : Icecream.cpp
	g++ -c -o Icecream.o Icecream.cpp
Sundae.o : Sundae.cpp
	g++ -c -o Sundae.o Sundae.cpp
clean:
	rm *.o assignment1