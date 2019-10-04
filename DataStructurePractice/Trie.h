#pragma once
#include<string>
#include <unordered_map>
class Trie
{
private:
	struct TrieNode {
		TrieNode() {
			key = 0;
			value = 0;
			children = new std::unordered_map<char, TrieNode*>;
		}
		TrieNode(char k, int value):key(k),value(value) {
			children = new std::unordered_map<char, TrieNode*>;
		}
		char key = 0;
		int value = 0;
		std::unordered_map<char, TrieNode*> * children;
	};
public:
	Trie();
	TrieNode* root;
	void insert(std::string key, int value);
	int search(std::string key);

};

