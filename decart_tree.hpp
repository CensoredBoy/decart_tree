#ifndef DTREE_H
#define DTREE_H

#include "node.hpp"
#include <vector>
class DTree
{
	Node* root;
	public:
	DTree(int x);
	DTree();
	DTree(DTree &other);
	DTree(DTree &&other);
	~DTree();
	void insert(int x);
	void remove(int x);
	bool find(int x);
	Node* get_root() { return root; }
	std::vector<int> ger_vector();

};


#endif