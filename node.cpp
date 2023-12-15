#include "node.hpp"

Node* Nodes::merge (Node *l, Node *r) {
    if (!l) return r;
    if (!r) return l;
    if (l->prior > r->prior) {
        l->r = merge(l->r, r);
        return l;
    }
    else {
        r->l = merge(l, r->l);
        return r;
    }
}


Pair Nodes::split (Node *p, int x) {
    if (!p) return {0, 0};
    if (p->key <= x) {
        Pair q = split(p->r, x);
        p->r = q.first;
        return {p, q.second};
    }
    else {
        Pair q = split(p->l, x);
        p->l = q.second;
        return {q.first, p};
    }
}

bool Nodes::find(Node *n, int x) {
    if (!n)
        return false;
    if (n->key == x)
        return true;
    else if (n->key > x)
        return find(n->l, x);
    else
        return find(n->r, x);

}
