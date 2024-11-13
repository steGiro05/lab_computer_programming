using namespace std;
#include <iostream>
#include "../linked_list.h"

namespace linked_list_ns
{
    void insert_recursion(node* current, double data);
    void order_recursion(double element_to_order,node * ordered_list);
    void insert_after(node * n,double val);
    void iterate_unordered_list(node * unordered_list,node * ordered_list);

    void insert(node** start, double data) {
        // Verifica se la lista è vuota
        if (*start == nullptr) {
            *start = new node;  // Crea un nuovo nodo
            (*start)->data = data;
            (*start)->next = nullptr;
        } else {
            // Chiama la funzione ricorsiva per inserire l'elemento
            insert_recursion(*start, data);
        }
    }


    void traverse(node *start){
        if(start==nullptr) return;
        cout<<start->data<<endl;
        traverse(start->next);
    }

    bool search(node * start,double value){
        if(start==nullptr)return false;
        if(start->data==value)return true;
        return search(start->next,value);
    }

    void deallocate_list(node *start) {
        while (start != nullptr) {
            node *temp = start;  // Conserva il nodo corrente
            start = start->next; // Sposta il puntatore al nodo successivo
            delete temp;         // Libera la memoria del nodo corrente
        }
    }


// Funzione ricorsiva per inserire un elemento alla fine della lista
    void insert_recursion(node* current, double data) {
        // Se siamo all'ultimo nodo, inseriamo il nuovo nodo
        if (current->next == nullptr) {
            node* n = new node;
            n->data = data;
            n->next = nullptr;  // Nuovo nodo diventa l'ultimo
            current->next = n;
        } else {
            // Altrimenti, procediamo con la ricorsione sul nodo successivo
            insert_recursion(current->next, data);
        }
    }


    void insert_before(node * n,double val){
        node * new_node = new node;
        new_node->next=n->next;
        double tmp=n->data;
        n->data=val;
        new_node->data=tmp;
        n->next=new_node;
    }

    node * order_list(node * start){
        node * ordered_list = nullptr;
        insert(&ordered_list,start->data);
        start=start->next;
        iterate_unordered_list(start,ordered_list);
        
        return ordered_list;
    }

    void iterate_unordered_list(node * unordered_list,node * ordered_list){
        if(unordered_list==nullptr) return;
        order_recursion(unordered_list->data,ordered_list);
        iterate_unordered_list(unordered_list->next,ordered_list);
    }


    void order_recursion(double element_to_order,node * ordered_list){
        //iterate the ordered list and insert element
        if(ordered_list->data>element_to_order){
            insert_before(ordered_list,element_to_order);
            return;
        }
        else if(ordered_list->next==nullptr){
            insert(&ordered_list,element_to_order);
            return;
        }
        order_recursion(element_to_order,ordered_list->next);
    }

} // namespace name