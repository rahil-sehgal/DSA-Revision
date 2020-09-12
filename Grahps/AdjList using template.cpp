#include<iostream>
#include<map>
#include<list>
#include<cstring>
using namespace std;

template <typename T>

class Graph{
  map<T,list<T>> adjList;

  public:
  Graph(){

  }
  void addEdge(T u,T v,bool bidir=true){
      adjList[v].push_back(u);
      if(bidir){
          adjList[u].push_back(v);
      }
  }
  void printAdjList(){
      //Iterate over maps = Use a for each loop 
      //Every row is a pair and stores 2 things 

      for(auto row:adjList )  // auto ki jagah we can even write pair<T,list<T>>
        {
             T key=row.first;
             cout<<key<<"->";

             for(T element:row.second){
                 cout<<element<<",";
             }
             cout<<endl;
        }

  }
  
  
  };

  int main(){
      Graph<string> g;
      g.addEdge("Amritsar","Delhi");
       g.addEdge("Amritsar","Jaipur");
        g.addEdge("Delhi","Saichen");
         g.addEdge("Delhi","Banglore");
        g.addEdge("Banglore","Jaipur");
        
     g.printAdjList();

  }
