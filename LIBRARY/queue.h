#ifndef QUEUE
#define QUEUE
#include "node.h"

namespace queue_ns
{
    void enqueue(node ** start,double val);//side effect on start node iff equal to nullptr
    double dequeue(node ** start);//side effect on start node
    void print(node * start);
    void deallocate_list(node *start);
    
} // namespace queue_ns

//list functions
#endif