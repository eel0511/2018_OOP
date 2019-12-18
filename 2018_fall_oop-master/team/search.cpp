#include <iostream>
#include "search.h"
#include "dijkstra.h"
#include "inputData.h"
#include "flo.h"

using namespace std;

search::search(){

}

void search::start(int x){
    
    
    cout<<" << want use txt file? yes :1 No : 2 >> "<<endl;
    cin>>x;
    if(x == 1){
        fileuse("");
    }
    else{
        nofileuse();
    }
   
    
  
}
void search::fileuse(string s){

    cout<<"Input Filename"<<endl;
    cin>>s;
    Graph *g = new Graph(false);
    dijkstra dij;
    flo f;
    InputData *inp = new InputData(g);
   
    
    int parent[MAXV + 1];
    int distance[MAXV + 1];
    int start;
    int arrive;

    cout<<"input start vertex : ";
    cin>>start;
    cout<<"input arrive vertex : ";
    cin>>arrive;

    inp->readFileInfo(s);
    inp->inputDataToGraph();

    f.make_print_flo(g,start,arrive);
    dij.make_and_print(g,arrive,parent,start,distance);
   
    delete g;
}
void search::nofileuse(){
    Graph *g = new Graph(false);
    dijkstra dij;
     int parent[MAXV + 1];
    int distance[MAXV + 1];
    int start;
    int arrive;
    
    flo f;
    g->insert_edge(1, 2, 110, false);
    g->insert_edge(2, 3, 115, false);
    g->insert_edge(3, 4, 74, false);
    g->insert_edge(4, 5, 121, false);
    g->insert_edge(5, 6, 39, false);
    g->insert_edge(6, 7, 103, false);
    g->insert_edge(6, 8, 67, false);
    g->insert_edge(8, 1, 222, false);

    cout<<"I have this graph"<<endl;
    g->print();
    cout<<"input start vertex : ";
    cin>>start;
    cout<<"input arrive vertex : ";
    cin>>arrive;

    
    f.make_print_flo(g,start,arrive);
    dij.dijkstra_shortest_path(g, parent, distance, start);
    dij.make_and_print(g,arrive,parent,start,distance);
    
    delete g;

    
}
