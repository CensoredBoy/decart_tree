#include <iostream>

#ifndef DECART_NODE_H
#define DECART_NODE_H

struct Node;

typedef std::pair<Node*, Node*> Pair;

struct Node {
    int key, prior;
    Node *l = 0, *r = 0;
    Node (int _key): key(_key), prior(_key){}
    ~Node();
};



namespace Nodes {
    bool find(Node *n, int x); 
    Node* merge (Node *l, Node *r);
    Pair split (Node *p, int x);   
}



#endif