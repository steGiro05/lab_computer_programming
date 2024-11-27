#include <string>
#include <iostream>

#ifndef TREE  
#define TREE  

template <typename T>
class Tree;

template <typename T>
class Tree_node {
    friend class Tree<T>;
private:
    Tree_node(T data, Tree_node* left_child, Tree_node* right_child)
        : data{ data }, left_child{ left_child }, right_child{ right_child } {}
    T data;
    Tree_node* left_child;
    Tree_node* right_child;
};

template <typename T>
class Tree {
public:
    // Costruttore con predicato
    Tree(std::function<bool(const T&, const T&)> comparator)
        : start{ nullptr }, comparator{ comparator } {}

    // Metodi pubblici
    void insert(T data);
    std::string to_string() const;
    std::string get_path(T data);
    void deallocate();

private:
    // Metodi privati
    void insert_recursive(T data, Tree_node<T>* iterator);
    std::string to_string_recursive(Tree_node<T>* iterator) const;
    std::string get_path_recursive(Tree_node<T> * iterator,T data);

    void deallocate_recursive(Tree_node<T>* iterator);

    // Attributi
    Tree_node<T>* start;
    std::function<bool(const T&, const T&)> comparator; // Funzione di confronto
};

template <typename T>
void Tree<T>::insert(T data) {
    if (start == nullptr) {
        start = new Tree_node<T>(data, nullptr, nullptr);
    }
    else {
        insert_recursive(data, start);
    }
}

template <typename T>
std::string Tree<T>::to_string() const {
    if (start == nullptr) return "Empty tree";
    else return to_string_recursive(start);
}

template <typename T>
void Tree<T>::insert_recursive(T data, Tree_node<T>* iterator) {
    if (comparator(data, iterator->data)) {
        if (iterator->left_child == nullptr) {
            iterator->left_child = new Tree_node<T>(data, nullptr, nullptr);
            return;
        }
        insert_recursive(data, iterator->left_child);
    }
    else {
        if (iterator->right_child == nullptr) {
            iterator->right_child = new Tree_node<T>(data, nullptr, nullptr);
            return;
        }
        insert_recursive(data, iterator->right_child);
    }
}

template <typename T>
std::string Tree<T>::to_string_recursive(Tree_node<T>* iterator) const {
    if (iterator == nullptr) return "";
    return to_string_recursive(iterator->left_child) + std::to_string(iterator->data) + " " +
           to_string_recursive(iterator->right_child);
}

template <typename T>
void Tree<T>::deallocate() {
    if (start == nullptr) return;
    deallocate_recursive(start);
    start = nullptr;
}

template <typename T>
void Tree<T>::deallocate_recursive(Tree_node<T>* iterator) {
    if (iterator == nullptr) return;
    deallocate_recursive(iterator->left_child);
    deallocate_recursive(iterator->right_child);
    delete iterator;
}

template <typename T>
std::string Tree<T>::get_path(T data) {
    if (start == nullptr) {
        return "Empty tree";
    }
    return get_path_recursive(start, data);
}

template <typename T>
std::string Tree<T>::get_path_recursive(Tree_node<T>* iterator, T data) {
    if (iterator == nullptr) {
        throw std::runtime_error("Value not found");
    }
    if (iterator->data == data) return "";
    if (comparator(data, iterator->data))
        return std::to_string(iterator->data) + " left " + get_path_recursive(iterator->left_child, data);
    else
        return std::to_string(iterator->data) + " right " + get_path_recursive(iterator->right_child, data);
}

template <typename T>
inline std::ostream& operator<<(std::ostream& os, const Tree<T>& o) {
    os << o.to_string();  // Chiamata al metodo to_string() per ottenere la rappresentazione
    return os;            // Restituisci il flusso per concatenare altre operazioni <<
}

#endif // TREE
