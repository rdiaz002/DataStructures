#pragma once
class BinaryTree
{
	struct Node {
		Node(int value):value(value) {
		}
		int value;
		Node* left = nullptr;
		Node* right = nullptr;
	};

public:
	BinaryTree();
	void insert(int value);
	Node* find(int value);
	Node* findParent(int value);
	Node* minimumNode(Node* node);
	Node* maximumNode(Node* node);
	void deleteNode(int value);
private:
	Node* root = nullptr;


};

