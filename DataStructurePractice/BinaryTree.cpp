#include "BinaryTree.h"

BinaryTree::BinaryTree()
{

}

void BinaryTree::insert(int value)
{
	if (root == nullptr) {
		root = new Node(value);
	}
	else {
		Node* currentNode = root;
		while (1) {
			if (value > currentNode->value) {
				if (currentNode->right == nullptr) {
					currentNode->right = new Node(value);
					break;
				}
				currentNode = currentNode->right;
			}
			else if (value < currentNode->value) {
				if (currentNode->left == nullptr) {
					currentNode->left = new Node(value);
					break;
				}
				currentNode = currentNode->left;
			}
			else {
				return;
			}
		}

	}
}

BinaryTree::Node* BinaryTree::find(int value)
{
	Node* currentNode = root;
	while (currentNode != nullptr) {
		if (value == currentNode->value) {
			return currentNode;
		}
		else if (value > currentNode->value) {
			currentNode = currentNode->right;
		}
		else {
			currentNode = currentNode->left;
		}
	}
	return nullptr;
}

BinaryTree::Node* BinaryTree::findParent(int value)
{
	if (value == root->value) {
		return nullptr;
	}
	else {
		Node* parentNode = root;
		Node* currentNode = nullptr;
		if (value > parentNode->value) {
			currentNode = parentNode->right;

		}
		else if(value < parentNode->value) {
			currentNode = parentNode->left;

		}
		while (currentNode != nullptr) {
			if (value > currentNode->value) {
				parentNode = currentNode;
				currentNode = currentNode->right;
			}
			else if(value < currentNode ->value) {
				parentNode = currentNode;
				currentNode = parentNode->left;

			}
			else if(value == currentNode->value) {
				return parentNode;
			}
			
		}

	}
	return nullptr;
}

BinaryTree::Node* BinaryTree::minimumNode(Node* node)
{
	while (node->left != nullptr) {
		node = node->left;
	}
	return node;
}

BinaryTree::Node* BinaryTree::maximumNode(Node* node)
{
	while (node->right != nullptr) {
		node = node->right;
	}
	return node;
}

void BinaryTree::deleteNode(int value)
{
	Node* delNode = find(value);
	Node* delParent = findParent(value);
	if (delNode == nullptr) {
		return;
	}
	if (delNode == root) {
		if (delNode->right != nullptr) {
			Node* temp = minimumNode(delNode->right);
			Node* parent = findParent(temp->value);
			temp->left = root->left;
			temp->right = root->right;
			root->left = nullptr;
			root->right = nullptr;
			parent->left = nullptr;
			delete root;
			root = temp;
			return;
		}
		else if (delNode->left != nullptr) {
			Node* temp = root;
			root = temp->left;
			temp->left = nullptr;
			temp->right = nullptr;
			delete temp;
			return;
		}
		else {

		}
	}
	if (delNode->right == nullptr && delNode->left) {

	}
}
