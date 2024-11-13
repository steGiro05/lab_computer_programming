#ifndef LINKED_LIST_H
#define LINKED_LIST_H
#include "node.h"

namespace linked_list_ns
{
    
void insert(node** start, double data);
void traverse(node *start);
void deallocate_list(node *start);
bool search(node * start,double value);
node * order_list(node * list);
} // namespace stack_ns

//list functions
#endif