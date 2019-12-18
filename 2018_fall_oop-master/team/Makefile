dij : main.o dijkstra.o Graph.o EdgeNode.o search.o inputData.o flo.o
	g++ -o dij main.o dijkstra.o Graph.o EdgeNode.o search.o inputData.o flo.o

main.o : main.cpp
	g++ -c -o main.o main.cpp
dijkstra.o : dijkstra.cpp
	g++ -c -o dijkstra.o dijkstra.cpp
Graph.o : Graph.cpp
	g++ -c -o Graph.o Graph.cpp
EdgeNode.o : EdgeNode.cpp
	g++ -c -o EdgeNode.o EdgeNode.cpp
search.o : search.cpp
	g++ -c -o search.o search.cpp
inputData.o : inputData.cpp
	g++ -c -o inputData.o inputData.cpp
flo.o : flo.cpp
	g++ -c -o flo.o flo.cpp
clean:
	rm *.o dij
