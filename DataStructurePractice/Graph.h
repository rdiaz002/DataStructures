#pragma once
#include <vector>
class Graph
{
public:
	Graph(int vert);
	void addEdge(int v, int w);
	
	void BFS(int v);
	
	void DFS(int startV);
	void DFSRecur(int v, bool vis[]);

	void printGraph();
private:
	std::vector<int>* graph; 
	int graphSize;

};

