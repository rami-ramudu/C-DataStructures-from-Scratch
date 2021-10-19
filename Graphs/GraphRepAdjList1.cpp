//Graph Representation Adjacency List 1 based Graph
#include<iostream>
#include<list>
using namespace std;
class Graph
{
     int V;//The number of Vertices of the graph
     list<int> *l; //a pointer to an array of lists
    public:
     Graph(int _v)
     {
         V=_v+1;
         l=new list<int>[V]; //initializes an array of size V where each index contains a list and l is pointing to such an array of
                             //lists

     }
     void addEdge(int i,int j,bool undir=true)
     {
         l[i].push_back(j);
         if(undir)  // if the graph is undirected
         {
            l[j].push_back(i);
         }
            
     }

     void printGraph()
     {
         for(int i=1;i<V;i++)  // if the graph is undirected
         {
             cout<<i<<"---->";
             for(auto node:l[i])
             {
                 cout<<node<<",";
             }
             cout<<"\n";
         }
     }

};
int main()
{
    Graph g(4);
    g.addEdge(2,3);
    g.addEdge(2,4);
    g.addEdge(3,4);
    g.printGraph();

    return 0;
}
