using namespace std;
#include <iostream>
#include "../circular_list.h"

void print_recursive(node * start,node * cspy);
void insert_recursive(node * start,node * cpy,double value);
int length(node * start);
int length_recoursive(node * start,node * iterator);

namespace circular_list_ns
{   

    void remove_neighbour(node ** n){
        if((*n)->next==*n)*n=nullptr;
        else{
            (*n)->next=(*n)->next->next;
        }

    }

    void insert(node ** start,double value){
        if(*start==nullptr){
            * start=new node;
            (*start)->data=value;
            (*start)->next=*start;
        }
        else{
            node * iterator=*start;
            insert_recursive(*start,iterator,value);
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

    int length(node * start){
        return length_recoursive(start,start);
    }
} // namespace circular_list_ns

void print_recursive(node * start,node * iterator){
    cout<<iterator->data<<endl;
    if(iterator->next==start)return;
    print_recursive(start,iterator->next);
}

void insert_recursive(node * start,node * iterator,double value){
    if(iterator->next!=start)insert_recursive(start,iterator->next,value);
    else{
        node * n = new node;
        n->data=value;
        n->next=start;
        iterator->next=n;
    }
}


int length_recoursive(node * start,node * iterator){
    if(iterator->next==start)return 1;
    return length_recoursive(start,iterator->next)+1;
}