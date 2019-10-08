#include "Graph.h"
#include<iostream>
#include <queue>
#include<stack>
Graph::Graph(int vert):graphSize(vert)
{
	graph = new std::vector<int>[vert];

}

void Graph::addEdge(int v, int w)
{
	graph[v].push_back(w);

}


void Graph::BFS(int v)
{
	bool* vis = new bool[graphSize];
	for (int i = 0; i < graphSize; i++) {
		vis[i] = false;
	}
	std::queue<int> upNext;
	upNext.push(v);
	while (!upNext.empty()) {
		int curr = upNext.front();
		upNext.pop();
		vis[curr] = true;
		if (graph[curr].size() != 0) {
			for (auto i : graph[curr]) {
				if (vis[i]) {
					continue;
				}
				upNext.push(i);
			}
		}
		std::cout << curr<<" ";
	}


}

void Graph::DFS(int startV)
{

	bool* vis = new bool[graphSize];
	for (int i = 0; i < graphSize; i++) {
		vis[i] = false;
	}
	std::stack<int> upNext;
	upNext.push(startV);
	while (!upNext.empty()) {
		int curr = upNext.top();
		upNext.pop();
		vis[curr] = true;
		if (graph[curr].size() != 0) {
			for (auto i : graph[curr]) {
				if (vis[i]) {
					continue;
				}
				upNext.push(i);
			}
		}
		std::cout << curr << " ";
	}

}



 

void Graph::printGraph()
{
	for (int i = 0; i < graphSize; i++) {
		std::vector<int>::iterator iter = graph[i].begin();
		for (iter; iter < graph[i].end(); iter++) {
			std::cout << "Hello";
		}
	}

}
