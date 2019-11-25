#include <iostream>
#include <cstdlib>
using namespace std;
class BinaryTree
{
	private:
		class node{
			public:
				int data;
				node *left;
				node *right;
				node(int data){
					this->data = data;
					this->left = NULL;
					this->right = NULL;
				}	
		};
	public:
        node *root;
		BinaryTree();
		~BinaryTree();
        void insert(int value);
        void printPreOrder(node *leaf);
        void printInOrder(node *leaf);
        void printPostOrder(node *leaf);
        void destroy_tree(node *leaf);
        bool search(int value);
};

