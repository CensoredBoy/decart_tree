#ifndef DTREE_H
#define DTREE_H

#include "node.hpp"
#include <vector>
class DTree
{
	Node* root;
	public:
	DTree(int x) noexcept;
	DTree() noexcept;
	DTree(DTree &other) noexcept;
	DTree(DTree &&other) noexcept;
	~DTree();
	void insert(int x);
	void remove(int x);
	bool find(int x);
	Node* get_root() { return root; }
	std::vector<int> ger_vector();
	DTree& operator+=(const DTree&) = delete;
	DTree& operator==(const DTree&) = delete;
	DTree& operator-=(const DTree&) = delete;
	DTree& operator*=(const DTree&) = delete;
	DTree& operator/=(const DTree&) = delete;

};


#endif