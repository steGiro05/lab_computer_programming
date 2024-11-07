#ifndef STACK_H
#define STACK_H
struct node{
    double data;
    node * next;
};

//list functions
void push(node ** start,double val);
double pop(node ** start);//returns the data
void print(node * start);
void deallocate_list(node *start);
#endif