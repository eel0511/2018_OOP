#include <iostream>
#include <stack>
#include "flo.h"
#include "inputData.h"
using namespace std;

#define MAXV 1000
#define MAX_INT 100000000


void flo::make_print_flo( Graph *g,int start,int distance){
   
    EdgeNode *curr;
    stack<int> s;
  int cont = MAXV;
  int v_curr;
  int v_neighbor;
  int dist[MAXV][MAXV];
  int n[MAXV][MAXV];
  int v;

  for(int a=0;a<MAXV;a++){
      for(int b=0;b<MAXV;b++){
          dist[a][b] = MAX_INT;
      }
  }
   
  
    g->Array(curr,dist);
   
    

 for(int k=1; k<cont; k++){
        for(int i=1; i<cont; i++){
            for(int j=1; j<cont; j++){

                
                if(dist[i][j] > min(dist[i][j], dist[i][k]+dist[k][j])){
            
                   n[i][j]=k;
      
                }
                dist[i][j] = min(dist[i][j], dist[i][k]+dist[k][j]);
               
            }
             
        }
       
    }
   /* for(int i=1; i<cont; i++){    for debug
            cout<<endl;
            cout<<"start ";
            for(int j=1; j<cont; j++){
               
                cout<<"\t"<<n[i][j];
                }
            }
     */       cout<<endl<<"floyd Shortest Path is : "<<start;
            
        this->print_flo(n,start,distance);

            cout<<" -> "<<distance<<endl;
            cout<<"Total cost"<<dist[start][distance];
}           
void flo::print_flo(int n[][MAXV],int start,int arrive){

    if(n[start][arrive]!=0){
        this->print_flo(n,start,n[start][arrive]);
        cout<<" -> "<<n[start][arrive];
        this->print_flo(n,n[start][arrive],arrive);
    }
}


