#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
      string name;
      vector<string>nbrs;

      node(string name)
      {
          this->name=name;
      }
};
class Graph
{
    unordered_map<string,node*>maps;//This map will have the name,address of a particular city/node in the graph
    public:
     Graph(vector<string>cities)
     {
        for(auto city:cities)
        {
           maps[city]=new node(city); //now every city will be created its own node
        } 

     }
     void addEdge(string city1,string city2,bool undir=false)
     {
        maps[city1]->nbrs.push_back(city2);
        if(undir)
        {
            maps[city2]->nbrs.push_back(city1);
        }
     }

     void printGraph()
     {
        for(auto cityPair:maps)
        {
            string city=cityPair.first;
            auto node=cityPair.second;
            cout<<city<<"----->";
            for(auto nbr:node->nbrs)
            {
               cout<<nbr<<",";
            }
            cout<<"\n";
        }
     }

};
int main()
{
    vector<string>cities={"NewYork","Chennai","Bangalore","Goa"};
   Graph g(cities);
   g.addEdge("NewYork","Chennai");
   g.addEdge("Chennai","Goa");
   g.addEdge("Goa","Chennai");
   g.addEdge("Bangalore","Chennai");
   g.printGraph();

    return 0;
}
