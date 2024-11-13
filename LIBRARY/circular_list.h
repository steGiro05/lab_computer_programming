#ifndef CIRCULAR_LIST_H
#define CIRCULAR_LIST_H
#include "node.h"

namespace circular_list_ns
{
    void insert(node ** start,double value);
    void remove_neighbour(node ** n);
    void print (node * start);
    void deallocate_list(node *start);
} // namespace stack_ns

//list functions
#endif