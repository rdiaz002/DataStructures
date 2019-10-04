#include <iostream>
#include "Trie.h"

int main()
{
	std::cout << "Hello World!\n";
	Trie myTrie;
	myTrie.insert("Hello", 6);
	std::cout << myTrie.search("Hello") << '\n';
	myTrie.insert("Hell", 10);
	myTrie.insert("Hello", 12);
	std::cout << myTrie.search("Hello")<< '\n';
	

	//Implement Trie Deletion
	return 0;
}