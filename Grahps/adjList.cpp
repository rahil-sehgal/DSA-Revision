#include<iostream>
#include<list>

using namespace std;


//Adj List Implementation for Integer nodes

class Graph{
    int V;
    //Array pf Linked Lists of size V, V LL's are there
    list<int> *adjList;
public: 
    Graph(int v){
        V=v;
        adjList = new list<int>[V];

    }

    void addEdge(int v,int u,bool bidir=true){
        adjList[v].push_back(u);
        if(bidir){
            adjList[u].push_back(v);
        }
    }
    
    void printAdjList(){
        //using for each loop C++14 supports it
        //for(int x:l){cout<<x;}
        //above is an example of for each loop
        
        for(int i=0;i<V;i++){
            cout<<i<<"->";
            for(int node:adjList[i]){
                cout<<node<<",";
            }
            cout<<endl;
        }
    }
};

int main(){
    Graph g(4);
    g.addEdge(0,1);
    g.addEdge(0,2);
    g.addEdge(0,3);
    g.addEdge(1,3);
    g.addEdge(2,3);

    g.printAdjList();
    
    return 0;

}
