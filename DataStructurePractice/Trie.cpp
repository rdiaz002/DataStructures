#include "Trie.h"

Trie::Trie()
{
	root = new TrieNode();
	
}

void Trie::insert(std::string key, int value)
{
	TrieNode* current = root;
	bool found = false;
	for (auto k = key.begin();k != --key.end(); k++) { //Complexity: O(key.size * size of children array) for each letter of the key we must find if the letter exists in the children array
		if (current->children->find(*k) == current->children->end()) {
				current->children->insert(std::make_pair(*k, new TrieNode(*(k), 0)));
				found = false;
		}
		else {
				found = true;
		}
		
		current = current->children->at(*k);
	}

	if(found){
		current->children->at(*(--key.end()))->value=value;
	}
	else {
		current->children->insert(std::make_pair(*(--key.end()), new TrieNode(*(--key.end()), value)));
	}
	

}

int Trie::search(std::string key)
{
	TrieNode * currentNode = root;
	for (auto k = key.begin(); k != --key.end(); k++) { //Complexity : O(Key.size * Size of children array)
		if (currentNode->children->find(*k) != currentNode->children->end()) {
			currentNode = currentNode->children->at(*k);
		}
		else {
			return -1;
		}

	}
	if (currentNode->children->at(*(--key.end()))->value == NULL) {
		return -1;
	}
	else {
		return currentNode->children->at(*(--key.end()))->value;
	}
}

