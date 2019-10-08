#include <iostream>
#include "Trie.h"
#include "BinaryTree.h"
#include "Graph.h"
void orderCode();
int main()
{
	//orderCode();
	/*std::cout << "Hello World!\n";
	Trie myTrie;
	myTrie.insert("Hello", 6);
	std::cout << myTrie.search("Hello") << '\n';
	myTrie.insert("Hell", 10);
	myTrie.insert("Hello", 12);
	std::cout << myTrie.search("Hello")<< '\n';*/
	

	//Implement Trie Deletion


	Graph myGraph(6);
	myGraph.addEdge(0, 1);
	myGraph.addEdge(0, 2);
	myGraph.addEdge(0, 3);
	myGraph.addEdge(0, 4);
	myGraph.addEdge(3, 5);
	myGraph.DFS(3);
	myGraph.printGraph();


	return 0;
}

void orderCode() {
	BinaryTree myTree; 
	myTree.insert(10);
	myTree.insert(15);
	myTree.insert(1);
	myTree.insert(10);

	return;



}