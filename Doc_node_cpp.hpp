/**
*@brief Функция merge объединяет два поддерева l и r в одно дерево.
*@param l Указатель на корень первого поддерева.
*@param r Указатель на корень второго поддерева.
*@return Указатель на корень объединенного дерева. 
*/

 Node Nodes::merge(Node *l, Node *r) 
 { 
    if (!l) return r; 
    if (!r) return l; 
    if (l->prior > r->prior) 
        { l->r = merge(l->r, r);
            return l; 
        } 
     else 
        { 
            r->l = merge(l, r->l); 
            return r; 
        } 
}

/**
*@brief Функция split разделяет дерево с корнем p на два поддерева по ключу x.
*@param p Указатель на корень дерева, которое нужно разделить.
*@param x Ключ, по которому происходит разделение.
*@return Пара указателей на корни получившихся поддеревьев. Первый элемент - левое поддерево, второй - правое поддерево. 
*/ 

Pair Nodes::split(Node *p, int x) 
{ 
    if (!p) return {0, 0}; 
    if (p->key <= x) 
     { 
        Pair q = split(p->r, x); 
        p->r = q.first; 
        return {p, q.second}; 
     } 
    else 
     { 
        Pair q = split(p->l, x); 
        p->l = q.second; 
        return {q.first, p}; 
     } 
}

/**
*@brief Функция find проверяет, содержится ли элемент с ключом x в дереве с корнем n.
*@param n Указатель на корень дерева.
*@param x Ключ, который нужно найти.
*@return true, если элемент найден, false - в противном случае. 
*/ 
bool Nodes::find(Node *n, int x) 
{
    if (!n) return false; 
    if (n->key == x) 
        return true; 
    else if (n->key > x) 
        return find(n->l, x); 
    else return find(n->r, x); 
} */