#ifndef QUEUE
#define QUEUE
#include "node.h"

namespace queue_ns
{
    void insert(node ** start,double val);
    double read(node ** start);//returns the data
    void print(node * start);
    void deallocate_list(node *start);
    
} // namespace queue_ns

//list functions
#endif