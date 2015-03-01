#include <iostream>
using namespace std;

typedef struct bst{
		int value;
		struct bst* left;
		struct bst* right;
} bst;

bst* newNode(int val){
	bst* node = new bst;
	node->left = NULL;
	node->left = NULL;
	node->value = val;
	return node;
};

bst* addNode(bst* tree, int val){
	if(tree==NULL)
	    return newNode(val);
    if(val<tree->value)
		tree->left = addNode(tree->left,val);
	if(val>tree->value)
		tree->right = addNode(tree->right,val);
	    return tree;
};

class Bst {
    bst *root; 
  public:
    Bst(int);
    int getRoot () {return root->value;}
    void addNode(int val);
};

Bst::Bst (int val) {
  root = newNode(val);
};

void Bst::addNode(int val){
  ::addNode(this->root, val);
}

int main () {
  Bst b (3);
  b.addNode(5);
  cout << "linkedList value1: " << b.getRoot() << endl;
  return 0;
}
