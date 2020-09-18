#include<bits/stdc++.h>

using namespace std;

class Graph
{
public:
	int V;	// number of vertices
	vector<int> *adj;  //adjacency list 

	Graph(int V);
	void addEdge(int x, int y);
	bool isRoute(int x, int y);
    void display();
	bool ispath(int start,int end);
};

// Constructor
Graph::Graph(int V)
{
	this->V=V;
	this->adj = new vector<int>[V];
}

// add a directed edge from x to y
void Graph::addEdge(int x, int y){
	adj[x].push_back(y);
}

void Graph::display(){
	for(int curr=0;curr<V;curr++){
		
		int n_size =adj[curr].size();
		for (int i = 0; i < n_size; ++i)
		{	
				cout<<curr<<"-> "<<adj[curr][i]<<"\n";
		}
	}
}

bool Graph::ispath(int start,int end){
	for(int curr=0;curr<V;curr++){
		int n_size =adj[curr].size();
		for (int i = 0; i < n_size; ++i)
		{	
				if(curr==start && adj[curr][i]==end)
					return true;
		}
	}
	return false;
}

int main(){

    Graph g(6);
    g.addEdge(5, 2);
    g.addEdge(5, 0);
    g.addEdge(4, 0);
    g.addEdge(4, 1);
    g.addEdge(2, 3);
    g.addEdge(3, 1);
	g.addEdge(0, 1);
    g.display();
	cout<<g.ispath(4,1)<<'\n';
	cout<<g.ispath(3,2)<<'\n';
    return 0;
}