#ifndef STACK_H
#define STACK_H
#include "node.h"

namespace stack_ns
{
    
void push(node ** start,double val); //side effect on start node
double pop(node ** start);//side effect on start node
void print(node * start);
void deallocate_list(node *start);
} // namespace stack_ns

//list functions
#endif