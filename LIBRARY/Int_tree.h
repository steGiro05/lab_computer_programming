#include <string>

#ifndef INT_TREE  
#define INT_TREE  

class Int_tree;

class Tree_node{
friend class Int_tree;
    private:
        Tree_node(int data,Tree_node * left_child,Tree_node * right_child):data{data},left_child{left_child},right_child{right_child}{};
        int data;
        Tree_node * left_child;
        Tree_node * right_child;
};

class Int_tree {
public:
    Int_tree():start{nullptr}{};

    void insert(int data);
    std::string to_string()const;
private:
    void insert_recursive(int data, Tree_node * iterator);
    std::string to_string_recursive(Tree_node * iterator)const;
    Tree_node * start;
};

inline std::ostream& operator<<(std::ostream& os, const Int_tree& o) {
    os << o.to_string();  // Chiamata al metodo to_string() per ottenere la rappresentazione
    return os;  // Restituisci il flusso per poter concatenare altre operazioni << se necessario
}

#endif // INT_TREE    
