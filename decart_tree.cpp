#include "decart_tree.hpp"
#include <queue>

DTree::DTree(DTree &other){
	Node *tmp = new Node(other.get_root().key);
	root = tmp;
}

DTree::DTree(DTree &&other){
	Node *tmp = other.get_root();
	std::swap(root, tmp);
	delete tmp;
}

DTree::DTree(){
	root = new Node(0);
}

DTree::DTree(int x){
	root = new Node(x);
}

~DTree::DTree(){
	delete root;
}


void DTree::insert (int x) {
    Pair q = Nodes::split(root, x);
    Node *t = new Node(x);
    root = Nodes::merge(q.first, Nodes::merge(t, q.second));
} 

void DTree::remove (int x) {
    Pair q = Nodes::split(root, x);
	Node *deleted = Nodes::merge(q.first->l, q.first->r);
	root = Nodes::merge(deleted, q.second);
} 

bool DTree::find(int x){
	return Nodes::find(root, x);
}

std::vector<int> DTree::get_vector(){
	std::vector<int> v;
	std::queue<Node*> q;
	q.push(root);
	while(!q.empty()){
		Node* n = q.front();
		q.pop();
		q.push(n->l);
		q.push(n->r);
		v.push_back(n->key);
	}
	return v;
}
