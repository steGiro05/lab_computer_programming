using namespace std;
#include <iostream>
#include "../queue.h"

namespace queue_ns
{
        
    void print(node *start) {
        if (start == nullptr) {
            std::cout << "Stack is empty" << std::endl;
        } else {
            do {
                std::cout << start->data << std::endl;
                start = start->next;
            } while (start != nullptr);  // Controlla che `start` non sia `nullptr`
        }
    }

    void enqueue(node ** start, double val) {
        if(*start==nullptr){
            *start=new node;
            (*start)->data=val;
            (*start)->next=nullptr;
            return;
        }

        node * new_node = new node;
        new_node->data = val;
        new_node->next = nullptr;

        node * tmp= * start;
        while (tmp->next!=nullptr)
        {
            tmp=tmp->next;
        }
        tmp->next=new_node;
    }

    double dequeue(node ** start) {
    double data;
    if (*start == nullptr) {
        __throw_runtime_error("Not enough elements in the queue!");
    }
    else{
        node * n = *start;
        *start = (*start)->next;
        data=n->data;
        delete n;
    }
    
    return data;
    }

    void deallocate_list(node *start) {
        while (start != nullptr) {
            node *temp = start;  // Conserva il nodo corrente
            start = start->next; // Sposta il puntatore al nodo successivo
            delete temp;         // Libera la memoria del nodo corrente
        }
    }

} // namespace name