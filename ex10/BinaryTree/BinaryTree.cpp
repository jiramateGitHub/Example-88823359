#include "BinaryTree.h"

BinaryTree::BinaryTree() {
	this->root = NULL;
}
BinaryTree::~BinaryTree() {
	this->destroy_tree(this->root);
}

void BinaryTree::insert(int value){
	node *newNode = new node(value);
	if(root == NULL) {
		root = newNode;
		cout << "First" << endl;
	}else{
		node *temp = root;
		node *ptemp = root;
		int check = 0;
		while(temp != NULL) {
			cout << "value "  << value  << " : temp->data " << temp->data;
			ptemp = temp;
			if(value <= temp->data) {
				temp = temp->left;
				check = 1;
				cout << " left++" << endl;
			} else if(value > temp->data) {
				temp = temp->right;
				check = 0;
				cout << " right++" << endl;
			}else{
				break;
			}
		}
		if(check == 1) {
			ptemp->left = newNode;
		} else {
			ptemp->right = newNode;
		}

	}
}

void BinaryTree::printPreOrder(node *leaf) {
	if (leaf == NULL){
		return;
	}   
	cout << leaf->data << " ";
	printPreOrder(leaf->left);
	printPreOrder(leaf->right);
}

void BinaryTree::printInOrder(node *leaf)
{
	if (leaf == NULL){
		return;
	}   
	printInOrder(leaf->left);
	cout << leaf->data << " ";
	printInOrder(leaf->right);
}

void BinaryTree::printPostOrder(node *leaf) {
	if (leaf == NULL){
		return;
	}  
	printPostOrder(leaf->left);
	printPostOrder(leaf->right);
	cout << leaf->data << " ";;
}

void BinaryTree::destroy_tree(node *leaf) {
	if(leaf!=NULL) {
		destroy_tree(leaf->left);
		destroy_tree(leaf->right);
		delete leaf;
	}
}

bool BinaryTree::search(int value){
	node * leaf = this->root;
	while(leaf!=NULL) {
		if(value == leaf->data){
			return true;
		}
		if(value < leaf->data){
			leaf = leaf->left;
		}else{
			leaf = leaf->right;
		}    
	}
	return false;
}
