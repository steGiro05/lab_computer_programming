using namespace std;
#include <iostream>
#include "stack.h"

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

void push(node ** start, double val) {
    node * new_node = new node;
    new_node->data = val;
    new_node->next = *start;
    *start=new_node;
}

double pop(node ** start) {
 double data;
 if (*start == nullptr) {
    __throw_runtime_error("Not enough elements in the list!");
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
    node *temp;
    while (start != NULL) {
        temp = start;
        start = start->next;
        delete temp;  // Free the memory of the current node
    }
}