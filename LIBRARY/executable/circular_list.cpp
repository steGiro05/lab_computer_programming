using namespace std;
#include <iostream>
#include "../circular_list.h"

void print_recursive(node * start,node * cpy);
void insert_recursive(node * start,node * cpy,double value);

namespace circular_list_ns
{   
    void insert(node ** start,double value){
        if(*start==nullptr){
            node * start=new node;
            start->data=value;
            start->next=nullptr;
        }
        else{
            node * cpy=*start;
            insert_recursive(*start,cpy,value);
        }
    }

    void print(node * start){
        node * cpy=start;
        print_recursive(start,cpy);
    }

    void deallocate_list(node *start) {
    if (start == nullptr) {
        return;  // Se la lista è vuota, non fare nulla
    }

    node *current = start;
    node *temp;

    // Continua a iterare finché non ritorni al nodo di partenza
    do {
        temp = current;         // Salva il nodo corrente
        current = current->next; // Spostati al nodo successivo
        delete temp;             // Dealloca il nodo corrente
    } while (current != start);  // Termina quando torni al nodo di partenza

    // Imposta start a nullptr per evitare riferimenti sospesi
    start = nullptr;
}

} // namespace circular_list_ns

void print_recursive(node * start,node * cpy){
    cout<<cpy->data<<endl;
    if(cpy->next!=start)print_recursive(start,cpy->next);
}

void insert_recursive(node * start,node * cpy,double value){
    if(cpy->next!=start)insert_recursive(start,cpy->next,value);
    else{
        node * n = new node;
        n->data=value;
        n->next=start;
        cpy->next=n;
    }
}