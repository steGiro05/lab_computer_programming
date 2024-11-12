#ifndef REGISTER_H
#define REGISTER_H
#include "node.h"

//list functions
void save(node * start,int position);
double recall(node * start, int position);
void deallocate_register(node * start);

#endif